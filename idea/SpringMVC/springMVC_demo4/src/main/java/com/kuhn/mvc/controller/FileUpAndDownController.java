package com.kuhn.mvc.controller;

import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.util.MultiValueMap;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.multipart.MultipartFile;

import javax.servlet.ServletContext;
import javax.servlet.http.HttpSession;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.UUID;

//文件的下载上传本质上是文件的复制
@Controller
public class FileUpAndDownController {

    @RequestMapping("/testDown")
    public ResponseEntity<byte[]> testResponseEntity(HttpSession httpSession) throws IOException {
        //获取ServletContext对象
        ServletContext servletContext = httpSession.getServletContext();

        //ServletContext对象获取服务器中文件的真实路径
        String realPath = servletContext.getRealPath("/static/img/1.jpg");

        //创建输入流
        FileInputStream fileInputStream = new FileInputStream(realPath);

        //创建字节数组
        byte[] bytes = new byte[fileInputStream.available()];

        //将输入流保存到字节数组中
        fileInputStream.read(bytes);

        //创建HttpHeaders对象设置响应头信息
        MultiValueMap<String,String> headers = new HttpHeaders();

        //设置要下载方式以及下载文件的名字
        headers.add("Content-Disposition","attachment;filename=1.jpg");

        //设置响应状态码
        HttpStatus status = HttpStatus.OK;

        //创建ResponseEntity对象
        ResponseEntity<byte[]> responseEntity = new ResponseEntity<>(bytes, headers, status);

        //关闭输入流
        fileInputStream.close();

        return responseEntity;
    }
    @RequestMapping("/testUp")
    public String testUp(MultipartFile photo, HttpSession session) throws IOException {
        //获取上传的文件的文件名
        String originalFilename = photo.getOriginalFilename();

        //处理文件重名问题
        String hzName = originalFilename.substring(originalFilename.lastIndexOf("."));      //获取文件名的后缀
        originalFilename = UUID.randomUUID().toString() + hzName;

        //获取服务器中photo目录的路径
        ServletContext servletContext = session.getServletContext();
        String realPath = servletContext.getRealPath("photo");
        File file = new File(realPath);
        if(!file.exists()){
            file.mkdir();
        }
        String filePath = realPath + File.separator + originalFilename;
        //实现上传功能
        photo.transferTo(new File(filePath));

        return "success";
    }

}
