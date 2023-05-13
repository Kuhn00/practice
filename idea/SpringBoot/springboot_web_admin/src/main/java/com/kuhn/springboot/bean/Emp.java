package com.kuhn.springboot.bean;

import lombok.*;


@Data
@AllArgsConstructor
@NoArgsConstructor
@ToString
@EqualsAndHashCode
public class Emp {
    private Integer empId;
    private String empName;
    private Integer age;
    private String gender;
    private String email;
}
