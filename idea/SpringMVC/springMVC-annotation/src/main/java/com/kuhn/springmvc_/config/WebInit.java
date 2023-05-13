package com.kuhn.springmvc_.config;

import org.springframework.web.filter.CharacterEncodingFilter;
import org.springframework.web.filter.HiddenHttpMethodFilter;
import org.springframework.web.servlet.support.AbstractAnnotationConfigDispatcherServletInitializer;

import javax.servlet.Filter;

/*
* 初始化类  代替web.xml
*
* */
public class WebInit extends AbstractAnnotationConfigDispatcherServletInitializer {
    /*
    * 指定spring的配置类
    * */
    @Override
    protected Class<?>[] getRootConfigClasses() {
        return new Class[]{SpringConfig.class};
    }

    /*
    * 指定springmvc的配置类
    * */
    @Override
    protected Class<?>[] getServletConfigClasses() {
        return new Class[]{WebConfig.class};
    }

    /*
    * 指定DispatcherServlet的映射规则，即url-pattern
    * */
    @Override
    protected String[] getServletMappings() {
        return new String[]{"/"};
    }
    /*
    * 添加过滤器
    * */
    @Override
    protected Filter[] getServletFilters() {
        CharacterEncodingFilter encodingFilter = new CharacterEncodingFilter();
        encodingFilter .setEncoding("UTF-8");
        encodingFilter .setForceRequestEncoding(true);
        HiddenHttpMethodFilter hiddenHttpMethodFilter = new HiddenHttpMethodFilter();
        return new Filter[]{encodingFilter , hiddenHttpMethodFilter};
    }
}
