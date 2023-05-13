package com.kuhn.mybatis.mapper;

import com.kuhn.mybatis.pojo.User;

import java.util.List;

public interface UserMapper {
    /*
    * MyBatis面向接口编程的一种
    *1、映射文件的namespace要和mapper接口的全类名保持一致
    *2、映射文件中SQL语句的id要和mapper接口中的方法名一致
    *
    *
    * */

//    添加用户信息
    int insertUser();

//    删除用户信息
    void deleteUser();

//    修改用户信息
    void updateUser();

//    根据id查询
    User getUserById();

//    查询所有用户信息
    List<User> getAllUser();
}
