package com.kuhn.spring5_.aopanno;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.EnableAspectJAutoProxy;

@Configuration
@ComponentScan(basePackages = {"com.kuhn"})
@EnableAspectJAutoProxy(proxyTargetClass = true)    //开启Aspect生成代理对象
public class AopConfig {
}
