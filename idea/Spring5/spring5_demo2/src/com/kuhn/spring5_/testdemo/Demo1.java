package com.kuhn.spring5_.testdemo;

import com.kuhn.spring5_.collectiontype.Book;
import com.kuhn.spring5_.collectiontype.Courses;
import org.junit.Test;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import com.kuhn.spring5_.collectiontype.Stu;
public class Demo1 {
    @Test
    public void testDemo1(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean.xml");
        Stu stu = app.getBean("stu", Stu.class);
        stu.test();
        stu.test2();
    }

    @Test
    public void testDemo2(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean2.xml");
        Book book = app.getBean("book", Book.class);
        book.test();
    }
    @Test
    public void testDemo3(){
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("bean3.xml");
        Courses courses = app.getBean("myBean", Courses.class);
        System.out.println(courses);
    }
}
