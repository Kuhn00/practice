package com.kuhn.mybatis.test;

import com.kuhn.mybatis.mapper.UserMapper;
import com.kuhn.mybatis.pojo.User;
import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.junit.Test;

import java.io.IOException;
import java.io.InputStream;
import java.util.List;

public class MyBatisTest {

    @Test
    public void testMyBatis() throws IOException {
        //加载核心配置文件
        InputStream is = Resources.getResourceAsStream("mybatis-config.xml");
        //创建SqlSessionFactoryBuilder对象
        SqlSessionFactoryBuilder sqlSessionFactoryBuilder = new SqlSessionFactoryBuilder();
        //通过核心配置文件所对应的字节输入流创建工厂类SqlSessionFactory，生产SqlSession对象
        SqlSessionFactory build = sqlSessionFactoryBuilder.build(is);
        //创建SqlSession对象 参数设置为true，此时通过SqlSession对象所操作的sql都会自动提交  sqlSession是mybatis提供的操作数据库的核心对象
        SqlSession sqlSession = build.openSession(true);
        //通过代理模式创建UserMapper接口的代理实现类对象
        UserMapper mapper = sqlSession.getMapper(UserMapper.class);
        //调用UserMapper接口中的方法，就可以根据UserMapper的全类名匹配元素文件，通过调用的方法名匹配映射文件中的SQL标签，并执行标签中的SQL语句
//        int res = mapper.insertUser();
//        mapper.deleteUser();
//        mapper.updateUser();
//        User userById = mapper.getUserById();
//        System.out.println(userById);
        List<User> allUser = mapper.getAllUser();
//        allUser.forEach(user  -> System.out.println(user));
        System.out.println(allUser);
        sqlSession.close();
        //sqlSession.commit();
        //System.out.println("res: " + res);
    }
}
