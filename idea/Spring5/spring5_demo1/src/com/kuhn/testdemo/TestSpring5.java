package com.kuhn.testdemo;

import com.kuhn.spring5_.User;
import org.junit.Test;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestSpring5 {
    @Test
    public void testAdd(){
        //加载spring 配置文件

        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");

        //根据配置文件创建对象

        //User user = (User)app.getBean("user");
        User user = app.getBean(User.class);

        user.text();
    }

}
