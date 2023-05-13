package com.kuhn.service.impl;

import com.kuhn.UserDao;
import com.kuhn.service.UserService;

public class UserServiceImpl implements UserService {
    private UserDao userDao;

    public UserServiceImpl(UserDao userDao) {
        this.userDao = userDao;
    }

    public UserServiceImpl() {
    }
    //    public void setUserDao(UserDao userDao) {
//        this.userDao = userDao;
//    }

    @Override
    public void save() {
//        ApplicationContext app = new ClassPathXmlApplicationContext("applicationContext.xml");
//
//        UserDao userDao = (UserDao) app.getBean("userDao");
        userDao.save();
    }
}
