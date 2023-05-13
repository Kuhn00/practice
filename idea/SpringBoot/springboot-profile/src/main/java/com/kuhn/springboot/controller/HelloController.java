package com.kuhn.springboot.controller;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloController {
    @Value("${person.name}")
    private String name;

    @GetMapping("/")
    public String test()
    {
        return "hello" + name;
    }
}
