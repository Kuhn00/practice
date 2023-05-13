package com.kuhn.springboot;

import com.kuhn.springboot.bean.User;
import com.kuhn.springboot.mapper.UserMapper;
import lombok.extern.slf4j.Slf4j;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.jdbc.core.JdbcTemplate;

import javax.annotation.Resource;
import javax.sql.DataSource;

@Slf4j
@SpringBootTest
class SpringbootWebAdminApplicationTests {

    @Resource
    JdbcTemplate jdbcTemplate;

    @Resource
    DataSource dataSource;

    @Resource
    UserMapper userMapper;

    @Test
    void contextLoads() {
        Long aLong = jdbcTemplate.queryForObject("select count(*) from t_emp", Long.class);
        log.info("记录总数：{}", aLong);
        log.info("数据源类型 ： {}", dataSource.getClass());
    }

    @Test
    public void testUserMapper()
    {
        User user = userMapper.selectById(1);
        log.info("user = {}", user);
    }
}
