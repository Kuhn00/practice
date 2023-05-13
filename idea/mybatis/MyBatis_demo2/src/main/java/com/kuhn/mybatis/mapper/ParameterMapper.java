package com.kuhn.mybatis.mapper;

import com.kuhn.mybatis.pojo.User;
import org.apache.ibatis.annotations.Param;

import java.util.List;
import java.util.Map;

public interface ParameterMapper {
    List<User> getAllUser();

    User getByUsername(String userName);

    User getDemo1(String username, String password);

    User getDemo2(Map<String, Object> map);

    int insertDemo3(User user);

    User getDemo4(@Param("username") String username, @Param("password") String password);
}
