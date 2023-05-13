package com.kuhn.spring5_.service;

import com.kuhn.spring5_.dao.UserDao;
import com.kuhn.spring5_.entity.Admin;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

//注入dao对象
@Service
public class UserService {
    @Autowired
    private UserDao userDao;

    public void addUser(Admin admin){
        userDao.add(admin);
    }

    public void deleteUser(String name){
        userDao.delete(name);
    }

    public void updateUser(String name,String pwd){
        userDao.update(name,pwd);
    }

    public void selectCountUser(){
        userDao.selectCount();
    }

    public void selectOneUser(String name){
        userDao.selectOne(name);
    }

    public void selectAllUser(){
        userDao.selectAll();
    }

    public void batchAddUser(List<Object[]> list){
        userDao.batchAdd(list);
        userDao.selectAll();
    }

    public void batchAddDelete(List<Object[]> list){
        userDao.batchDelete(list);
    }
}
