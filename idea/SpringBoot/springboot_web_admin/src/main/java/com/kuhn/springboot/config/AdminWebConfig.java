package com.kuhn.springboot.config;

import com.kuhn.springboot.interceptor.LoginInterceptor;
import org.springframework.context.annotation.Configuration;
import org.springframework.web.servlet.HandlerInterceptor;
import org.springframework.web.servlet.config.annotation.InterceptorRegistry;
import org.springframework.web.servlet.config.annotation.WebMvcConfigurer;

@Configuration
public class AdminWebConfig implements WebMvcConfigurer {
    /**
     * 1、编写一个拦截器实现HandlerInterceptor接口
     * 2、拦截器注册到容器中(实现 WebMvcConfigurer 接口  addInterceptors方法)
     * 3、指定拦截器规则
     * @param registry
     */
    @Override
    public void addInterceptors(InterceptorRegistry registry) {
        registry.addInterceptor((HandlerInterceptor) new LoginInterceptor())
                .addPathPatterns("/**")     //拦截所有请求  包括静态资源
                .excludePathPatterns("/", "/login", "/css/**", "/fonts/**", "/images/**", "/js/**");    //不进行拦截的请求
    }
}
