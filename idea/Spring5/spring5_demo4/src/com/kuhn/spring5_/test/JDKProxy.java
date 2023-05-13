package com.kuhn.spring5_.test;

import com.kuhn.spring5_.dao.UserDao;
import com.kuhn.spring5_.dao.UserDaoImpl;
import com.kuhn.spring5_.dao.UserDaoProxy;

import java.lang.reflect.Proxy;

public class JDKProxy {
    public static void main(String[] args) {
        Class[] interfaces = {UserDao.class};

        UserDaoImpl userDao = new UserDaoImpl();
        UserDao dao = (UserDao) Proxy.newProxyInstance(JDKProxy.class.getClassLoader(),interfaces,new UserDaoProxy(userDao){});
        int result1 = dao.add(1, 2);
        String result2 = dao.update("123");
        System.out.println(result1);
        System.out.println(result2);
    }
}
