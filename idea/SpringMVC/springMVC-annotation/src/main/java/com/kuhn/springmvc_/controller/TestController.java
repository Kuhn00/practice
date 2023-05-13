package com.kuhn.springmvc_.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class TestController {

    @RequestMapping("/testIndex")
    public String testIndex(){
        return "success";
    }
}
