package com.chengzi.resultset;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.sql.*;
import java.util.Properties;

@SuppressWarnings({"all"})
public class ResultSet_ {
    public static void main(String[] args) throws IOException, ClassNotFoundException, SQLException {
        //通过properties 对象获取相关配置文件的信息
        Properties properties = new Properties();
        properties.load(new FileInputStream("src\\mysql.properties"));
        //获取相关的值
        String user = properties.getProperty("user");
        String password = properties.getProperty("password");
        String url = properties.getProperty("url");
        String driver = properties.getProperty("driver");
        //注册驱动
        Class.forName(driver);
        //连接
        Connection connection = DriverManager.getConnection(url, user, password);
        Statement statement = connection.createStatement();

        String sql = "select id, name , sex, borndate from actor";
        ResultSet resultSet = statement.executeQuery(sql);

        //使用 while取出数据
        while (resultSet.next()){   //让光标后移 没有就返回false
            int id = resultSet.getInt(1); //获取该行的第 1 列
            // int id1 = resultSet.getInt("id"); 通过列名来获取值, 推荐
            String name = resultSet.getString(2);
            String sex = resultSet.getString(3);
            Date date = resultSet.getDate(4);

            System.out.println(id + "\t" + name + "\t" + sex + "\t" + date);
        }

        //关闭连接
        resultSet.close();
        statement.close();
        connection.close();
    }

}
