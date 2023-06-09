package com.kuhn.mvc.bean;

public class User {
    private Integer id;

    private Integer age;

    private String username;

    private String password;

    private String sex;

    public User() {
    }

    public User(Integer id, Integer age, String username, String password, String sex) {
        this.id = id;
        this.age = age;
        this.username = username;
        this.password = password;
        this.sex = sex;
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public Integer getAge() {
        return age;
    }

    public void setAge(Integer age) {
        this.age = age;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

}
