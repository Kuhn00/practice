package com.kuhn.spring5_.service;

import com.kuhn.spring5_.dao.AccountDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional      //1、添加在类上面 对类的所有方法都进行事务操作 2、添加在方法上面 只对该方法进行事务操作
public class AccountService {
    @Autowired
    private AccountDao accountDao;

    public void reduce(){
        accountDao.reduceMoney();
    }

    public void add(){
        accountDao.addMoney();
    }

    public void accountMoney(){
        accountDao.addMoney();
        //int e = 1 / 0;
        accountDao.reduceMoney();
    }
}
