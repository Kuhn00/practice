package com.kuhn.mybatis.test;

import com.github.pagehelper.PageHelper;
import com.kuhn.mybatis.mapper.DeptMapper;
import com.kuhn.mybatis.mapper.EmpMapper;
import com.kuhn.mybatis.pojo.Dept;
import com.kuhn.mybatis.pojo.Emp;
import com.kuhn.mybatis.utils.SqlSessionUtils;
import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

import java.util.List;

public class ResultMapTest {
    @Test
    public void testGetAllEmp(){
        SqlSession sqlSession = SqlSessionUtils.getSqlSession();
        EmpMapper mapper = sqlSession.getMapper(EmpMapper.class);
//        PageHelper.startPage();
        List<Emp> allEmp = mapper.getAllEmp();

        allEmp.forEach(emp -> System.out.println(emp));
    }

    @Test
    public void testGetEmpAndDept(){
        EmpMapper mapper = SqlSessionUtils.getSqlSession().getMapper(EmpMapper.class);
        Emp empAndDept = mapper.getEmpAndDept(3);
        System.out.println(empAndDept);
    }

    @Test
    public void testGetDeptAndEmpByStep(){
        EmpMapper mapper = SqlSessionUtils.getSqlSession().getMapper(EmpMapper.class);
        Emp emp = mapper.getEmpAndDeptByStepOne(1);
        System.out.println(emp);
    }
    
    @Test
    public void testGetDeptAndEmp(){
        DeptMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DeptMapper.class);
        Dept deptAndEmp = mapper.getDeptAndEmp(1);
        System.out.println(deptAndEmp);
    }

    @Test
    public void testGetEmpAndDeptByStep(){
        DeptMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DeptMapper.class);
        Dept dept = mapper.getDeptAndEmpByStepOne(1);
        System.out.println(dept);
    }
}
