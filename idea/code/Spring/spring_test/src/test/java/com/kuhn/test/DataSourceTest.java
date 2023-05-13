package com.kuhn.test;

import com.alibaba.druid.pool.DruidDataSource;
import com.alibaba.druid.pool.DruidPooledConnection;
import com.mchange.v2.c3p0.ComboPooledDataSource;
import org.junit.Test;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import javax.sql.DataSource;
import java.sql.Connection;
import java.util.ResourceBundle;

public class DataSourceTest {

    @Test
    //druid数据源 加载配置文件
    public void test5() throws Exception {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("applicationContext-druid.xml");
        DataSource bean = app.getBean(DataSource.class);
        Connection connection = bean.getConnection();
        System.out.println(connection);
        connection.close();
    }

    @Test
    //c3p0数据源  加载配置文件
    public void test4() throws Exception {
        ClassPathXmlApplicationContext app = new ClassPathXmlApplicationContext("applicationContext-c3p0.xml");
//        DataSource datasource = (DataSource)app.getBean("datasource");
//        Connection connection = datasource.getConnection();
//        System.out.println(connection);
//        connection.close();
        DataSource bean = app.getBean(DataSource.class);
        Connection connection = bean.getConnection();
        System.out.println(connection);
        connection.close();
    }
    @Test
    //c3p0数据源  加载配置文件
    public void test3() throws Exception {
        ResourceBundle bundle = ResourceBundle.getBundle("jdbc");
        String driver = bundle.getString("driver");
        String url = bundle.getString("url");
        String user = bundle.getString("user");
        String password = bundle.getString("password");

        //创建数据源对象
        ComboPooledDataSource comboPooledDataSource = new ComboPooledDataSource();
        comboPooledDataSource.setDriverClass(driver);
        comboPooledDataSource.setJdbcUrl(url);
        comboPooledDataSource.setUser(user);
        comboPooledDataSource.setPassword(password);
        Connection connection = comboPooledDataSource.getConnection();
        System.out.println(connection);
        connection.close();
    }

    @Test
    //druid数据源
    public void test2() throws Exception {
        DruidDataSource dataSource = new DruidDataSource();
        dataSource.setDriverClassName("com.mysql.jdbc.Driver");
        dataSource.setUrl("jdbc:mysql://localhost:3306/ck_db01");
        dataSource.setUsername("root");
        dataSource.setPassword("123456");
        DruidPooledConnection connection = dataSource.getConnection();
        System.out.println(connection);
        connection.close();
    }

    @Test
    //c3p0数据源
    public void test1() throws Exception {
        ComboPooledDataSource dataSource = new ComboPooledDataSource();
        dataSource.setDriverClass("com.mysql.jdbc.Driver");
        dataSource.setJdbcUrl("jdbc:mysql://localhost:3306/ck_db01");
        dataSource.setUser("root");
        dataSource.setPassword("123456");

        Connection connection = dataSource.getConnection();

        System.out.println(connection);
        connection.close(); //归还数据源
    }
}
