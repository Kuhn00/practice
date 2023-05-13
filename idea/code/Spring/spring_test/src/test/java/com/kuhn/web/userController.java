package com.kuhn.web;

import com.kuhn.service.impl.UserServiceImpl;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class userController {
    public static void main(String[] args) {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("applicationContext.xml");
        UserServiceImpl userService = app.getBean(UserServiceImpl.class);

        userService.save();
    }
}
