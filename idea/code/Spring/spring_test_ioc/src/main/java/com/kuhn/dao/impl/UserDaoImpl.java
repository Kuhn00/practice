package com.kuhn.dao.impl;

import com.kuhn.UserDao;
import com.kuhn.domain.User;

import java.util.List;
import java.util.Map;
import java.util.Properties;

public class UserDaoImpl implements UserDao {

    private List<String> strList;
    private Map<String, User> userMap;
    private Properties properties;

    private String name;
    private int age;

    public void setStrList(List<String> strList) {
        this.strList = strList;
    }

    public void setUserMap(Map<String, User> userMap) {
        this.userMap = userMap;
    }

    public void setProperties(Properties properties) {
        this.properties = properties;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

//    public UserDaoImpl(){
//        System.out.println("UserDaoImpl被创建!");
//    }
//
//    public void init(){
//        System.out.println("初始化方法");
//    }
//
//    public void destroy(){
//        System.out.println("销毁方法方法");
//    }

    @Override
    public void save() {
        //System.out.println(name + "===" + age);
        System.out.println(strList);
        System.out.println(userMap);
        System.out.println(properties);
        System.out.println("save running");
    }
}
