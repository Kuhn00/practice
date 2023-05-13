package com.kuhn.spring5_.collectiontype;

import java.util.List;

public class Book {
    private List<String> bookList;

    public void setBookList(List<String> bookList) {
        this.bookList = bookList;
    }

    public void test(){
        System.out.println(bookList);
    }
}
