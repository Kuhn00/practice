package com.chengzi.datasource;

import com.chengzi.utils.JDBCUtils;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;
import org.apache.commons.dbutils.handlers.ScalarHandler;
import org.junit.Test;

import java.sql.Connection;
import java.sql.SQLException;
import java.util.List;

@SuppressWarnings({"all"})
public class DBUtils_USE {
    //使用 apache-DBUtils 工具类 + druid 完成对表的 crud 操作
    @Test
    public void testQueryMany() throws SQLException {//返回结果是多行的情况
        //1. 得到 连接 (druid)
        Connection connection = JDBCUtils.getConnection();

        //2. 使用 DBUtils 类和接口 , 先引入 DBUtils 相关的 jar , 加入到本 Project
        //3. 创建 QueryRunner
        QueryRunner queryRunner = new QueryRunner();
        //4. 就可以执行相关的方法，返回 ArrayList 结果集
        String sql = "select * from actor where id >= ?";
        //String sql = "select id, name from actor where id >= ?";
        List<Actor> list = queryRunner.query(connection, sql, new BeanListHandler<>(Actor.class),1);
        for (Actor actor: list) {
            System.out.print(actor);
        }
        JDBCUtils.close(null, null, connection);
    }
    @Test
    //查询单条记录
    public void testQuerySingle() throws SQLException {
        Connection connection = JDBCUtils.getConnection();

        QueryRunner queryRunner = new QueryRunner();
        String sql = "select name from actor where id >= ?";

        Actor actor = queryRunner.query(connection, sql, new BeanHandler<>(Actor.class), 1);

        System.out.println(actor);
        JDBCUtils.close(null, null, connection);
    }

    @Test
    //单行单列的记录
    public void testScalar() throws SQLException {
        Connection connection = JDBCUtils.getConnection();

        QueryRunner queryRunner = new QueryRunner();
        String sql = "select * from actor where id >= ?";
        Object o = queryRunner.query(connection, sql, new ScalarHandler<>(), 1);

        System.out.println(o);

        JDBCUtils.close(null, null, connection);
    }

    @Test
    public void testDML() throws SQLException {
        Connection connection = JDBCUtils.getConnection();

        QueryRunner queryRunner = new QueryRunner();

        //String sql = "insert into actor values(null, ?, ?, ?, ?)";
        String sql = "delete from actor where id = ?";
        //row 为影响的行数
        //所有dml 操作都update方法
        //int row = queryRunner.update(connection, sql, "林青霞", "女", "1966-10-10", "116");
        int row = queryRunner.update(connection, sql, 1000);
        System.out.println(row > 0 ? "执行成功" : "执行没有影响到表");
        JDBCUtils.close(null, null, connection);

    }
}
