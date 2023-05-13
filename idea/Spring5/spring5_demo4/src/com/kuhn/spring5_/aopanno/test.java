package com.kuhn.spring5_.aopanno;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class test {
    public static void main(String[] args) {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        User user = app.getBean("user", User.class);
        user.add();
    }
}
