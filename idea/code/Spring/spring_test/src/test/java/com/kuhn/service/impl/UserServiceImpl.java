package com.kuhn.service.impl;

import com.kuhn.dao.UserDao;
import com.kuhn.service.UserService;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;

//    <bean id="userService" class="com.kuhn.service.impl.UserServiceImpl">

@Service("userService")
@Scope("singleton")
public class UserServiceImpl implements UserService {
    @Value("${driver}")
    private String driver;

    //        <property name="userDao" ref="userDao"></property>
//    @Autowired      //按照数据类型进行匹配
//    @Qualifier("userDao")   //结合@Autowired  按照id值从容器中进行匹配
    @Resource(name = "userDao")  //相当于Autowired+Qualifier("userDao")
    private UserDao userDao;

    public void setUserDao(UserDao userDao) {
        this.userDao = userDao;
    }

    @Override
    public void save() {
        System.out.println(driver);
        userDao.save();
    }
}
