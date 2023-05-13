package com.kuhn.spring5_.service;

import com.kuhn.spring5_.dao.UserDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;

//value可以省略  默认是类名首字母小写
//@Service(value = "userService")     //<bean id="userService" class="...">

@Service
public class UserService {

    //定义dao类型属性
    //不需要set方法
//    @Autowired      //根据属性类型自动注入  这里会找UserDao的实现类
//    @Qualifier(value = "userDaoImpl")   //根据名称注入  如果接口有多个实现类  可以配合Autowired使用
//    private UserDao userDao;

    @Resource(name = "userDaoImpl")  //@Resource既可以根据 类型 注入   又可以根据  名称  注入
    private UserDao userDao;
    @Value(value = "1")     //注入普通数据类型(字符串也可以)
    private int age;
    public void add(){
        System.out.println("service add....");
        userDao.add();
        System.out.println("age" + age);
    }
}
