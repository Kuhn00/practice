package com.kuhn.spring5_.collectiontype;

import java.util.List;
import java.util.Map;
import java.util.Set;

public class Stu {
    private String[] courses;
    private List<String> list;
    private Map<String, String> map;
    private Set<String> set;

    private List<Courses> coursesList;      //学生所学的课程\

    public void setCoursesList(List<Courses> coursesList) {
        this.coursesList = coursesList;
    }

    public void setCourses(String[] courses) {
        this.courses = courses;
    }

    public void setList(List<String> list) {
        this.list = list;
    }

    public void setMap(Map<String, String> map) {
        this.map = map;
    }

    public void setSet(Set<String> set) {
        this.set = set;
    }

    public void test(){
        System.out.println(courses);
        System.out.println(list);
        System.out.println(map);
        System.out.println(set);
    }

    public void test2(){
        System.out.println(coursesList);
    }
}
