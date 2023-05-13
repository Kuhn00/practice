package com.kuhn.springboot.config;

import ch.qos.logback.core.db.DBHelper;
import com.kuhn.springboot.bean.Car;
import com.kuhn.springboot.bean.Pet;
import com.kuhn.springboot.bean.User;
import org.springframework.boot.autoconfigure.condition.ConditionalOnBean;
import org.springframework.boot.context.properties.EnableConfigurationProperties;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;
import org.springframework.context.annotation.ImportResource;

//给容器中自动创建出这两个类型的组件、默认组件的名字就是全类名
@Import({User.class, DBHelper.class})
//配置类本身也是组件
@Configuration(proxyBeanMethods = true)
//属性  proxyBeanMethods 默认为true Full模式   各组件有依赖关系
//      false Lite模式    启动速度更快 各组件之间没有依赖关系时使用该模式
@ConditionalOnBean(name = "tom")        //容器中有tom组件时才执行下面的操作
//导入配置文件
@ImportResource("classpath:beans.xml")
//@EnableConfigurationProperties(Car.class)
public class MyConfig {

    //Bean 注解标注在方法上给容器注册组件  默认是单例 组件的id是方法名 如果添加了value属性  那么id为属性名
    @Bean(value = "user")
    public User createUser()
    {
        User user = new User("张三", 20);
        user.setPet(getPet());
        return user;
    }

    @Bean
    public Pet getPet()
    {
        return new Pet("tom");
    }
}
