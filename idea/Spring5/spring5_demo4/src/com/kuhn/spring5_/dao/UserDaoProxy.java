package com.kuhn.spring5_.dao;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.util.Arrays;

//写增强的部分  可以直接由匿名内部类实现
public class UserDaoProxy implements InvocationHandler{
    //代理的对象  寄被增强的方法所在的类
    private Object obj;

    public UserDaoProxy(Object obj) {
        this.obj = obj;
    }
    //写所需要增强的逻辑代码
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        //方法之前
        System.out.println("方法之前执行...."+method.getName()+" :传递的参数..."+ Arrays.toString(args));

        //被增强的方法执行
        Object res = method.invoke(obj,args);

        //方法之后
        System.out.println("方法之后执行...."+obj);
        return res;
    }
}
