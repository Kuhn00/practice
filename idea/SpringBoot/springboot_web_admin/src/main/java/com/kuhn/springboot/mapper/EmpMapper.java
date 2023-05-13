package com.kuhn.springboot.mapper;

import com.kuhn.springboot.bean.Emp;
import org.apache.ibatis.annotations.Mapper;

@Mapper
public interface EmpMapper {
    public Emp getEmpById(Integer id);
}
