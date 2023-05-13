package com.kuhn.spring5_.aopanno;

import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.core.annotation.Order;
import org.springframework.stereotype.Component;

//增强的类
@Component
@Aspect     //生成代理对象
//如果有多个增强类时 可以设置优先级  数字越小 优先级越高
@Order(1)
public class UserProxy {
    //配置不同类型的通知

    //当有相同切入点时可以进行抽取
    @Pointcut(value = "execution(* com.kuhn.spring5_.aopanno.User.add(..))")
    public void pointDemo(){}


    //前置通知
    @Before(value = "pointDemo()")
    public void before(){
        System.out.println("这是前置通知....");
    }

    //后置通知(返回通知)
    @AfterReturning(value = "execution(* com.kuhn.spring5_.aopanno.User.add(..))")
    public void afterReturning(){
        System.out.println("这是后置通知");
    }

    //最终通知  try catch 里的finally
    @After(value = "execution(* com.kuhn.spring5_.aopanno.User.add(..))")
    public void after(){
        System.out.println("这是最终通知....");
    }

    //异常通知
    @AfterThrowing(value = "execution(* com.kuhn.spring5_.aopanno.User.add(..))")
    public void afterThrowing(){
        System.out.println("这是异常通知。。。");
    }

    @Around(value = "execution(* com.kuhn.spring5_.aopanno.User.add(..))")
    public void around(ProceedingJoinPoint proceedingJoinPoint) throws Throwable{
        System.out.println("环绕前。。。");
        //执行被增强的方法
        proceedingJoinPoint.proceed();
        System.out.println("环绕后。。。");
    }
}
