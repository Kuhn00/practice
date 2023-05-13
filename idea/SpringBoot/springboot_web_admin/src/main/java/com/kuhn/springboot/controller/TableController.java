package com.kuhn.springboot.controller;

import com.kuhn.springboot.bean.User;
import com.kuhn.springboot.service.UserService;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

import javax.annotation.Resource;
import java.util.Arrays;
import java.util.List;

@Controller
public class TableController {
    @Resource
    UserService userService;

    @GetMapping("/table/basic_table")
    public String basicTable()
    {
        return "/table/basic_table";
    }

    @GetMapping("/table/dynamic_table")
    public String dynamicTable(Model model)
    {
//        List<User> users = Arrays.asList(new User("zhangsan","123456"),
//                                    new User("lisi", "123456"),
//                                    new User("wangwu","123456"),
//                                    new User("zhaoliu","12333"));
//        model.addAttribute("users",users);
        List<User> list = userService.list();
        model.addAttribute("users", list);
        return "table/dynamic_table";
    }

    @GetMapping("/table/editable_table")
    public String editable_table()
    {
        return "table/editable_table";
    }

    @GetMapping("/table/pricing_table")
    public String pricingTable()
    {
        return "table/pricing_table";
    }

    @GetMapping("/table/responsive_table")
    public String responsiveTable()
    {
        return "/table/responsive_table";
    }
}
