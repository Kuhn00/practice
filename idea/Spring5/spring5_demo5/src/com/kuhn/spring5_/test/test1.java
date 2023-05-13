package com.kuhn.spring5_.test;

import com.kuhn.spring5_.entity.Admin;
import com.kuhn.spring5_.service.UserService;
import org.junit.Test;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import java.util.ArrayList;
import java.util.List;

public class test1 {
    @Test
    public void testJdbcTemplate1(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        Admin admin = new Admin();
        admin.setName("王五");
        admin.setPwd("123456");
        userService.addUser(admin);
        app.close();
    }

    @Test
    public void testJdbcTemplate2(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.deleteUser("王五");
    }

    @Test
    public void testJdbcTemplate3(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.updateUser("lisi","123");
    }

    @Test
    public void testJdbcTemplate4(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.selectCountUser();
    }

    @Test
    public void testJdbcTemplate5(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.selectOneUser("lisi");
    }

    @Test
    public void testJdbcTemplate6(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.selectAllUser();
    }

    @Test
    public void testJdbcTemplate7(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        UserService userService = app.getBean("userService", UserService.class);
        userService.selectAllUser();
        List<Object[]> batchArgs = new ArrayList<>();
        Object[] o1 = {"王五","123"};
        Object[] o2 = {"李四","123"};
        batchArgs.add(o1);
        batchArgs.add(o2);
        System.out.println("==============================================");
        userService.batchAddUser(batchArgs);
    }
}
