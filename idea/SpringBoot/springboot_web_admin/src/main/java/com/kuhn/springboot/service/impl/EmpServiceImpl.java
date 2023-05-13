package com.kuhn.springboot.service.impl;

import com.kuhn.springboot.bean.Emp;
import com.kuhn.springboot.mapper.EmpMapper;
import com.kuhn.springboot.service.EmpService;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;

@Service
public class EmpServiceImpl implements EmpService {

    @Resource
    EmpMapper empMapper;
    public Emp getEmp(Integer id)
    {
        return empMapper.getEmpById(id);
    }
}
