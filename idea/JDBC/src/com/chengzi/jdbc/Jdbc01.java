package com.chengzi.jdbc;


import com.mysql.jdbc.Driver;

import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Properties;

public class Jdbc01 {
    public static void main(String[] args) throws SQLException {
        //1、注册驱动
        Driver driver = new Driver();   //创建driver对象

        //2、连接数据库
        String url = "jdbc:mysql://127.0.0.1:3306/jdbc_test";

        Properties properties = new Properties();
        properties.setProperty("user","root");
        properties.setProperty("password","123456");

        Connection connect = driver.connect(url, properties);

        //3、执行sql语句
        String sql = "insert into actor values(null, '刘德华', '男', '1970-11-11', '110')";
        Statement statement = connect.createStatement();
        //statement 用于执行静态 SQL 语句并返回其生成的结果的对象

        int row = statement.executeUpdate(sql);     //返回值为影响的行数

        System.out.printf(row > 0 ?"成功" : "失败");

        //4、关闭连接 释放资源
        statement.close();
        connect.close();
    }
}
