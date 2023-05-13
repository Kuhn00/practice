package com.kuhn.controller;

import com.kuhn.service.AccountService;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class AccountController {
    public static void main(String[] args) {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("applicationContext.xml");
        AccountService bean = app.getBean(AccountService.class);
        bean.transfer("tom", "lucy", 500);
    }
}
