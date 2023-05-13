package com.kuhn.springboot.bean;

import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class User {
    private String name;

    private Integer age;

    private Pet pet;

    public Pet getPet() {
        return pet;
    }

    public User(String name, Integer age) {
        this.name = name;
        this.age = age;
    }
}
