package com.kuhn.springboot;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

public class Junit5Test {
    @Test
    @DisplayName("第一次测试")
    public void firstTest()
    {
        System.out.println("这是第一次测试");
    }
}
