package com.kuhn.mybatis.test;

import com.kuhn.mybatis.mapper.DynamicSQLMapper;
import com.kuhn.mybatis.pojo.Emp;
import com.kuhn.mybatis.utils.SqlSessionUtils;
import org.junit.Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class DynamicSQLMapperTest {
    @Test
    public void testGetEmpByCondition(){
        DynamicSQLMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DynamicSQLMapper.class);
        List<Emp> list = mapper.getEmpByConditionTwo(new Emp(null, "张三", 20, null, ""));
        System.out.println(list);
    }

    @Test
    public void testGetEmpByChoose(){
        DynamicSQLMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DynamicSQLMapper.class);
        List<Emp> list = mapper.getEmpByChoose(new Emp(null, null, null, null, ""));
        System.out.println(list);
    }
    @Test
    public void testDeleteMoreByArray(){
        DynamicSQLMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DynamicSQLMapper.class);
        int i = mapper.deleteMoreByArray(new Integer[]{9, 10, 11});
        System.out.println(i);
    }

    @Test
    public void testInsertMoreByList(){
        DynamicSQLMapper mapper = SqlSessionUtils.getSqlSession().getMapper(DynamicSQLMapper.class);
        Emp emp1 = new Emp(null, "a1", 23, "男", "123@qq.com");
        Emp emp2 = new Emp(null, "a1", 23, "男", "123@qq.com");
        Emp emp3 = new Emp(null, "a1", 23, "男", "123@qq.com");
        List<Emp> list = Arrays.asList(emp1, emp2, emp3);
        int i = mapper.insertMoreByList(list);
        System.out.println(i);
    }
}
