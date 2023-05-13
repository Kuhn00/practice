package com.chengzi.jdbc;

import com.mysql.jdbc.Driver;
import org.junit.Test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Properties;

//连接数据库的五中方式
public class JdbcConn {
    @Test
    public void connect01() throws SQLException {
        //1、注册驱动
        Driver driver = new Driver();   //创建driver对象

        //2、连接数据库
        String url = "jdbc:mysql://127.0.0.1:3306/jdbc_test";

        Properties properties = new Properties();
        properties.setProperty("user","root");
        properties.setProperty("password","123456");

        Connection connect = driver.connect(url, properties);
        System.out.println(connect);
    }

    //方式2、使用反射加载
    @Test
    public void connect02() throws ClassNotFoundException, InstantiationException, IllegalAccessException, SQLException {
        //使用反射加载Driver类
        Class<?> aClass = Class.forName("com.mysql.jdbc.Driver");
        Driver driver = (Driver) aClass.newInstance();

        String url = "jdbc:mysql://127.0.0.1:3306/jdbc_test";

        Properties properties = new Properties();
        properties.setProperty("user","root");
        properties.setProperty("password","123456");
        Connection connect = driver.connect(url, properties);
        System.out.println(connect);
    }
    //方式3、使用DriverManager 代替Driver
    @Test
    public void connect03() throws ClassNotFoundException, InstantiationException, IllegalAccessException, SQLException {
        Class<?> aClass = Class.forName("com.mysql.jdbc.Driver");

        Driver driver = (Driver) aClass.newInstance();
        String url = "jdbc:mysql://127.0.0.1:3306/jdbc_test";
        String user = "root";
        String password = "123456";

        DriverManager.registerDriver(driver);   //注册driver 驱动

        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }

    //方式4、使用Class.forName 自动完成注册驱动  使用最多
    @Test
    public void connect04() throws ClassNotFoundException, SQLException {
        //反射加载
        //在加载Driver 时自动注册 可以看Driver类的源码
        Class.forName("com.mysql.jdbc.Driver");

        String url = "jdbc:mysql://127.0.0.1:3306/jdbc_test";
        String user = "root";
        String password = "123456";
        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }

    //方式5、 是方式4的改进 增加配置文件  将数据库信息添加到配置文件中
    @Test
    public void connect05() throws IOException, ClassNotFoundException, SQLException {
        //通过properties 对象获取相关配置文件的信息
        Properties properties = new Properties();
        properties.load(new FileInputStream("src\\mysql.properties"));
        //获取相关的值
        String user = properties.getProperty("user");
        String password = properties.getProperty("password");
        String url = properties.getProperty("url");
        String driver = properties.getProperty("driver");

        Class.forName(driver);

        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }
}
