package com.kuhn.spring5_.config;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;

@Configuration      //作为配置类  代替xml文件
@ComponentScan(basePackages = {"com.kuhn"})     //组件扫描  数组形式
public class SpringConfig {
}
