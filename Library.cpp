#include "Library.h"
#include <fstream>
#include <algorithm>

Library::Library(const std::string& logFileName) : logger(logFileName) {}

void Library::addBook(const Book& book) {
    books.push_back(book);
    logger.log("Added book: " + book.toString());
}

std::vector<Book> Library::getBooksByAuthor(const std::string& author) const {
    std::vector<Book> result;
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            result.push_back(book);
        }
    }
    return result;
}

std::vector<Book> Library::getBooksByPublisher(const std::string& publisher) const {
    std::vector<Book> result;
    for (const auto& book : books) {
        if (book.getPublisher() == publisher) {
            result.push_back(book);
        }
    }
    return result;
}

std::vector<Book> Library::getBooksAfterYear(int year) const {
    std::vector<Book> result;
    for (const auto& book : books) {
        if (book.getYear() > year) {
            result.push_back(book);
        }
    }
    return result;
}

std::vector<Book> Library::getAllBooks() const {
    return books;
}

void Library::saveBooksToFile(const std::string& fileName) const {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        for (const auto& book : books) {
            outFile << book << std::endl;
        }
        outFile.close();
        logger.log("Saved books to file: " + fileName);
    }
}
