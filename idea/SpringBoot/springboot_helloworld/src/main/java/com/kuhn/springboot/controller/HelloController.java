package com.kuhn.springboot.controller;

import com.kuhn.springboot.bean.Car;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@Slf4j
@RestController
public class HelloController {
    @Autowired
    private Car car;

    @RequestMapping("/car")
    public Car getCar()
    {
        return car;
    }
    @RequestMapping("/hello")
    public String hello()
    {
        log.info("hello springboot");
        return "hello springboot";
    }
}
