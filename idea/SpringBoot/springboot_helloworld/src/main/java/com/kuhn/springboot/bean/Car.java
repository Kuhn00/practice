package com.kuhn.springboot.bean;

import lombok.Data;
import lombok.ToString;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.stereotype.Component;

/*
只有在容器中的组件才拥有springboot的功能
* */
@Data
@ToString
@Component
@ConfigurationProperties(prefix = "mycar")
public class Car {
    private String brand;

    private Integer price;


    public Car(String brand, Integer price) {
        this.brand = brand;
        this.price = price;
    }

    public Car() {
    }
}
