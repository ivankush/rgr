#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Logger.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books;
    Logger logger;

public:
    Library(const std::string& logFileName);

    void addBook(const Book& book);
    std::vector<Book> getBooksByAuthor(const std::string& author) const;
    std::vector<Book> getBooksByPublisher(const std::string& publisher) const;
    std::vector<Book> getBooksAfterYear(int year) const;
    std::vector<Book> getAllBooks() const;  // Новий метод для отримання всіх книг
    void saveBooksToFile(const std::string& fileName) const;
};

#endif // LIBRARY_H
