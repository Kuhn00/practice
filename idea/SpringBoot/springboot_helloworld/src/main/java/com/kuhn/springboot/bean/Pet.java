package com.kuhn.springboot.bean;

import lombok.*;

@AllArgsConstructor     //全参构造器
@NoArgsConstructor      //无参构造器
@Data                   //getset方法
@ToString
@EqualsAndHashCode
public class Pet {
    private String name;


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Pet{" +
                "name='" + name + '\'' +
                '}';
    }
}
