package com.kuhn.springboot.controller;

import com.kuhn.springboot.bean.Emp;
import com.kuhn.springboot.bean.User;
import com.kuhn.springboot.service.impl.EmpServiceImpl;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;
import org.thymeleaf.util.StringUtils;

import javax.annotation.Resource;
import javax.servlet.http.HttpSession;

@Controller
public class IndexController {

    @Resource
    JdbcTemplate jdbcTemplate;

    @Resource
    EmpServiceImpl empService;

    @ResponseBody
    @GetMapping("/emp")
    public Emp getEmpById(@RequestParam("id") Integer id)
    {
        return empService.getEmp(id);
    }

    @ResponseBody
    @GetMapping("/sql")
    public String queryFromDb()
    {
        Long aLong = jdbcTemplate.queryForObject("select count(*) from t_emp", Long.class);
        return aLong.toString();
    }

    /**
     * get请求 去到登录页
     * 访问/ 和  /login路径都能进入到登录页面
     * @return
     */

    @GetMapping(value = {"/", "/login"})
    public String loginPage()
    {
        return "login";
    }

    /**
     *
     * @param
     * @param
     * @return
     */
    @PostMapping("/login")
    public String sighIn(User user, HttpSession httpSession, Model model)
    {
        if(!StringUtils.isEmpty(user.getUserName()) && "123456".equals(user.getPassWord()))
        {
            //保存登陆成功的用户
            httpSession.setAttribute("loginUser", user);
            //登录成功 重定向main.html  防止表单重复提交
            return "redirect:/main";
        }else{
            model.addAttribute("msg", "账号或密码错误");
            return "login";
        }
    }

    /**
     * 直接访问main页面
     * @return
     */
    @GetMapping("/main")
    public String mainPage(HttpSession httpSession, Model model)
    {
/*        Object user = httpSession.getAttribute("loginUser");
        if (null == user)
        {
            model.addAttribute("msg", "请先登录");
            return "login";
        }else{
            //是否登录  拦截器和过滤器
            return "main";
        }*/
        return "main";
    }
}
