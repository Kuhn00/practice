package com.kuhn.test;

import com.kuhn.domain.Admin;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;

import java.util.List;

@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration("classpath:applicationContext.xml")
public class jdbcTemplateCRUDTest {

    @Autowired
    private JdbcTemplate jdbcTemplate;

    @Test
    public void insert(){
        jdbcTemplate.update("");
    }
    //实体
    @Test
    public void testQueryAll(){
        List<Admin> query = jdbcTemplate.query("select * from admin", new BeanPropertyRowMapper<Admin>(Admin.class));
        System.out.println(query);
    }

    @Test
    public void testQueryOne(){
        Admin lisi = jdbcTemplate.queryForObject("select * from admin where name=?", new BeanPropertyRowMapper<Admin>(Admin.class), "lisi");
        System.out.println(lisi);
    }

    @Test
    public void testQueryCount(){
        Long count= jdbcTemplate.queryForObject("select count(*) from admin", Long.class);
        System.out.println(count);
    }
}
