package com.kuhn.dao.impl;

import com.kuhn.dao.UserDao;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Repository;

//<bean id="userDao" class="com.kuhn.dao.impl.UserDaoImpl"/>
@Repository("userDao")
public class UserDaoImpl implements UserDao {

    @Override
    public void save() {
        System.out.println("running");
    }
}
