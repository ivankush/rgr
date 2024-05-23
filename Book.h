#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    std::string publisher;
    int year;
    int pages;
    double price;
    std::string coverType;

public:

    Book();
    Book(int id, const std::string& title, const std::string& author, const std::string& publisher, int year, int pages, double price, const std::string& coverType);

    // Методи доступу
    int getId() const;
    void setId(int id);

    std::string getTitle() const;
    void setTitle(const std::string& title);

    std::string getAuthor() const;
    void setAuthor(const std::string& author);

    std::string getPublisher() const;
    void setPublisher(const std::string& publisher);

    int getYear() const;
    void setYear(int year);

    int getPages() const;
    void setPages(int pages);

    double getPrice() const;
    void setPrice(double price);

    std::string getCoverType() const;
    void setCoverType(const std::string& coverType);


    friend std::ostream& operator<<(std::ostream& os, const Book& book);


    std::string toString() const;
};

#endif 
