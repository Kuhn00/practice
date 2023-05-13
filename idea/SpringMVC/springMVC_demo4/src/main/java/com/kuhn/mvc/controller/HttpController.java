package com.kuhn.mvc.controller;

import com.kuhn.mvc.bean.User;
import org.springframework.http.RequestEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller
public class HttpController {

    @RequestMapping("/testRequestBody")
    public String testRequestBody(@RequestBody String requestBody){
        System.out.println(requestBody);
        return "success";
    }

    @RequestMapping("testRequestEntity")
    public String testRequestEntity(RequestEntity<String> requestEntity){
        System.out.println("requestHeader:"+requestEntity.getHeaders());
        System.out.println("requestBody:"+requestEntity.getBody());
        return "success";
    }

    @RequestMapping("testResponseBody")
    @ResponseBody       //不加此注解 响应的数据会是一个新的视图 即success.html
    public String testResponseBody(){
        return "success";
    }

    @RequestMapping("testResponseUser")
    @ResponseBody
    public User testResponseUser(){
        return new User(001, 18, "橙","123456", "男");        //在页面上显示的是json对象
    }
}
