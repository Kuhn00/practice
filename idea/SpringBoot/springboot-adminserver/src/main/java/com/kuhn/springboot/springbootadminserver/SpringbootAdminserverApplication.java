package com.kuhn.springboot.springbootadminserver;

import de.codecentric.boot.admin.server.config.EnableAdminServer;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
@EnableAdminServer
public class SpringbootAdminserverApplication {

    public static void main(String[] args) {
        SpringApplication.run(SpringbootAdminserverApplication.class, args);
    }

}
