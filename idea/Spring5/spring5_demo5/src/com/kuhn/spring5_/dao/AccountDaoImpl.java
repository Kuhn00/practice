package com.kuhn.spring5_.dao;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;

@Repository
public class AccountDaoImpl implements AccountDao{
    @Autowired
    private JdbcTemplate jdbcTemplate;
    @Override
    public void reduceMoney() {
        String sql = "update account set money=money-? where name=?";
        jdbcTemplate.update(sql,1000,"tom");
    }

    @Override
    public void addMoney() {
        String sql = "update account set money=money+? where name=?";
        jdbcTemplate.update(sql,1000,"lucy");
    }
}
