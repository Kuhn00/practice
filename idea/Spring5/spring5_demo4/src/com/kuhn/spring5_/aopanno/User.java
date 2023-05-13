package com.kuhn.spring5_.aopanno;

import org.springframework.stereotype.Component;

//被增强的类
@Component
public class User {
    public void add(){
        System.out.println("add....");
//        try {
//            System.out.println(1 / 0);
//        } catch (Exception e) {
//            throw new RuntimeException(e);
//        }
    }
}
