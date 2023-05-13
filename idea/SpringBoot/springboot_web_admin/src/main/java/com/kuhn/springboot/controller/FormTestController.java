package com.kuhn.springboot.controller;

import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.io.File;
import java.io.IOException;

@Controller
@Slf4j
public class FormTestController {

    @GetMapping("/form_layouts")
    public String formLayouts()
    {
        return "/form/form_layouts";
    }

    /**
     * MultiPartFile  自动封装上传来的文件
     * @param email
     * @param userName
     * @param headerImg
     * @param photos
     * @return
     */
    @PostMapping("/upload")
    public String upload(@RequestParam("email") String email,
                         @RequestParam("username") String userName,
                         @RequestPart("headerImg") MultipartFile headerImg,
                         @RequestPart("photos") MultipartFile[] photos) throws IOException {
        log.info("上传的文件信息 email={}, username={}, headerImg={}, photos={}", email, userName, headerImg.getSize(), photos.length);

        if(!headerImg.isEmpty())
        {
            //保存文件到服务器 oss服务器
            String originalFilename = headerImg.getOriginalFilename();
            headerImg.transferTo(new File("D:\\Desktop\\" + originalFilename));
        }

        if(photos.length > 0)
        {
            for (MultipartFile photo: photos) {
                if(!photo.isEmpty())
                {
                    String originalFilename = photo.getOriginalFilename();
                    photo.transferTo(new File("D:\\Desktop\\" + originalFilename));
                }
            }
        }
        return "main";
    }
}
