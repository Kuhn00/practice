package com.kuhn.mvc.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

import javax.servlet.http.HttpServletRequest;

@Controller
public class ScopeController {

    //使用servletAPI向request域共享数据
    @RequestMapping("/testServletAPI")
    public String testServletAPI(HttpServletRequest httpServletRequest){
        httpServletRequest.setAttribute("testScope","hello,servletAPI");
        return "success";
    }

    //使用modelAndView向request域共享数据
    @RequestMapping("/testModelAndView")
    public ModelAndView testModelAndView(){
        ModelAndView mav = new ModelAndView();
        mav.addObject("testScope", "hello,ModelAndView");
        mav.setViewName("success");
        return mav;
    }

}
