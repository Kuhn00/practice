package com.kuhn.spring5_.dao;

import com.kuhn.spring5_.entity.Admin;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;

import java.util.List;

//注入jdbcTemplate对象
@Repository
public class UserDaoImpl implements UserDao {

    @Autowired
    private JdbcTemplate jdbcTemplate;

    @Override
    public void add(Admin admin) {
        String sql = "insert into admin value(?,?)";
        Object[] args = {admin.getName(), admin.getPwd()};

        int update = jdbcTemplate.update(sql,args);

    }

    @Override
    public void delete(String name) {
        String sql = "delete from admin where name=?";

        jdbcTemplate.update(sql,name);
    }

    @Override
    public void update(String name, String pwd) {
        String sql = "update admin set pwd=? where name=?";
        jdbcTemplate.update(sql,pwd,name);

    }

    @Override
    public void selectCount() {
        String sql = "select count(*) from admin";
        Integer count = jdbcTemplate.queryForObject(sql, Integer.class);
        System.out.println(count);
    }

    @Override
    public void selectOne(String name) {
        String sql = "select * from admin where name=?";
        Admin admin = jdbcTemplate.queryForObject(sql, new BeanPropertyRowMapper<Admin>(Admin.class), name);
        System.out.println(admin);
    }

    @Override
    public void selectAll() {
        String sql = "select * from admin";

        List<Admin> adminList = jdbcTemplate.query(sql, new BeanPropertyRowMapper<Admin>(Admin.class));
        System.out.println(adminList);
    }

    @Override
    public void batchAdd(List<Object[]> list) {
        String sql = "insert into admin value(?,?)";
        int[] ints = jdbcTemplate.batchUpdate(sql, list);
        System.out.println(ints);
    }

    //删除和修改都是batchUpdate方法 主需要修改sql语句 以及参数list内的内容
    @Override
    public void batchDelete(List<Object[]> list) {

    }


}
