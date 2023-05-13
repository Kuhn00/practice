package com.kuhn.spring5_.aopxml;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class test {
    public static void main(String[] args) {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean2.xml");
        Book book = app.getBean("book", Book.class);
        book.buy();
    }
}
