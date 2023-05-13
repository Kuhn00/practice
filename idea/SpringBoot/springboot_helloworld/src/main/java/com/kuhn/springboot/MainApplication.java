package com.kuhn.springboot;

import com.kuhn.springboot.bean.Pet;
import com.kuhn.springboot.bean.User;
import com.kuhn.springboot.config.MyConfig;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;


/*
* 主程序类
*@SpringBootApplication：SpringBoot应用
* */
@SpringBootApplication
/*
包含以下三个注解
* @SpringBootConfiguration
@EnableAutoConfiguration
@ComponentScan
* */
public class MainApplication {
    public static void main(String[] args) {
        //1、返回ioc容器
        ConfigurableApplicationContext run = SpringApplication.run(MainApplication.class, args);

        //2、查看容器里的所有组件
        String[] names = run.getBeanDefinitionNames();
        for (String name: names) {
            System.out.println(name);
        }

        System.out.println(run.getBean("user",User.class) == run.getBean("user",User.class));

        MyConfig bean = run.getBean(MyConfig.class);
        System.out.println(bean);

        System.out.println(run.getBean("createUser", User.class).getPet() == run.getBean("getPet", Pet.class));
    }
}
