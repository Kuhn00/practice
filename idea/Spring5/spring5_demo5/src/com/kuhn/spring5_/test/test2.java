package com.kuhn.spring5_.test;

import com.kuhn.spring5_.service.AccountService;
import org.junit.Test;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class test2 {
    @Test
    public void testJdbcTemplate(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean1.xml");
        AccountService accountService = app.getBean("accountService", AccountService.class);
        accountService.accountMoney();
    }
}
