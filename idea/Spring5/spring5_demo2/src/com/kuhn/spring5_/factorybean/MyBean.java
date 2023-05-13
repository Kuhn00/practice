package com.kuhn.spring5_.factorybean;

import com.kuhn.spring5_.collectiontype.Courses;
import org.springframework.beans.factory.FactoryBean;

public class MyBean implements FactoryBean {

    @Override
    public Object getObject() throws Exception {
        Courses courses = new Courses();
        courses.setCname("abc");
        return courses;
    }

    @Override
    public Class<?> getObjectType() {
        return null;
    }

    @Override
    public boolean isSingleton() {
        return false;
    }
}
