package com.kuhn.springboot.bean;

import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.stereotype.Component;

import java.util.Date;
import java.util.List;
import java.util.Set;
import java.util.Map;

@ConfigurationProperties(prefix = "person")
@Component
@ToString
@Data
@NoArgsConstructor
public class Person {
    private String userName;
    private Boolean boss;
    private Date birth;
    private Integer age;
    private Pet pet;
    private String[] interests;
    private List<String> animal;
    private Map<String,Object> score;
    private Set<Double> salarys;
    private Map<String, List<Pet>> allPets;
}
