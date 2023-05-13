package com.kuhn.dao.impl;

import com.kuhn.dao.AccountDao;
import org.springframework.jdbc.core.JdbcTemplate;

public class AccountDaoImpl implements AccountDao {
    private JdbcTemplate jdbcTemplate;

    public void setJdbcTemplate(JdbcTemplate jdbcTemplate) {
        this.jdbcTemplate = jdbcTemplate;
    }

    @Override
    public void out(String outName, double money) {
        jdbcTemplate.update("update account set money=money-? where name=?",money,outName);
    }

    @Override
    public void in(String inName, double money) {
        jdbcTemplate.update("update account set money=money+? where name=?",money,inName);
    }
}
