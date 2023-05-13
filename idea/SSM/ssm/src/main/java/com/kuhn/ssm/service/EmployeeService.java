package com.kuhn.ssm.service;

import com.github.pagehelper.PageInfo;
import com.kuhn.ssm.pojo.Employee;

import java.util.List;

public interface EmployeeService {
    /**
     * 查询所有的员工信息
     * @return
     */
    List<Employee> getAllEmployee();

    PageInfo<Employee> getEmployeePage(Integer pageNum);
}
