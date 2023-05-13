package com.kuhn.springboot_web.controller;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloController {
    @RequestMapping("/aaa.png")
    public String hello(){
        return "aaa";
    }
}
