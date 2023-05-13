package com.kuhn.dao;

public interface AccountDao {
    public void out(String outName, double money);
    public void in(String inName, double money);
}
