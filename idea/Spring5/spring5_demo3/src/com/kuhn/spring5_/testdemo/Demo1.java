package com.kuhn.spring5_.testdemo;

import com.kuhn.spring5_.config.SpringConfig;
import com.kuhn.spring5_.service.UserService;
import org.junit.Test;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Demo1 {
    @Test
    public void test1(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        //UserService userService = app.getBean("userService", UserService.class);
        UserService userService = (UserService)app.getBean("userService");
        System.out.println(userService);
        userService.add();
    }

    @Test
    public void test2(){
        //加载配置类
        AnnotationConfigApplicationContext app = new AnnotationConfigApplicationContext(SpringConfig.class);
        UserService userService = app.getBean("userService", UserService.class);
        userService.add();
    }
}
