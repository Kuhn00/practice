package com.kuhn.spring5_.collectiontype;

public class Courses {
    private String cname;   //课程名称

    public void setCname(String cname) {
        this.cname = cname;
    }

    @Override
    public String toString() {
        return "Courses{" +
                "cname='" + cname + '\'' +
                '}';
    }
}
