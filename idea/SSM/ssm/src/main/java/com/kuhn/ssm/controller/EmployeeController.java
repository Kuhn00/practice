package com.kuhn.ssm.controller;

import com.github.pagehelper.PageInfo;
import com.kuhn.ssm.pojo.Employee;
import com.kuhn.ssm.service.EmployeeService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import java.util.List;

@Controller
public class EmployeeController {

    @Autowired
    private EmployeeService employeeService;

    @RequestMapping(value = "/employee", method = RequestMethod.GET)
    public String getAllEmployee(Model model)
    {
        List<Employee> list = employeeService.getAllEmployee();
        model.addAttribute("list", list);
        return "employee_list";
    }

    @RequestMapping(value = "/employee/page/{pageNum}", method = RequestMethod.GET)
    public String getAllEmployeePage(@PathVariable("pageNum") Integer pageNum, Model model)
    {
        PageInfo<Employee> page = employeeService.getEmployeePage(pageNum);
        model.addAttribute("page", page);
        return "employee_list";
    }
}
