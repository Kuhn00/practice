package com.kuhn.spring5_.dao;

import com.kuhn.spring5_.entity.Admin;

import java.util.List;

public interface UserDao {
    public void add(Admin admin);
    public void delete(String name);
    public void update(String name, String pwd);
    public void selectCount();
    public void selectOne(String name);
    public void selectAll();

    public void batchAdd(List<Object[]> list);

    public void batchDelete(List<Object[]> list);


}
