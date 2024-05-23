#include "Book.h"

Book::Book() : id(0), year(0), pages(0), price(0.0) {}

Book::Book(int id, const std::string& title, const std::string& author, const std::string& publisher, int year, int pages, double price, const std::string& coverType)
    : id(id), title(title), author(author), publisher(publisher), year(year), pages(pages), price(price), coverType(coverType) {}

int Book::getId() const { return id; }
void Book::setId(int id) { this->id = id; }

std::string Book::getTitle() const { return title; }
void Book::setTitle(const std::string& title) { this->title = title; }

std::string Book::getAuthor() const { return author; }
void Book::setAuthor(const std::string& author) { this->author = author; }

std::string Book::getPublisher() const { return publisher; }
void Book::setPublisher(const std::string& publisher) { this->publisher = publisher; }

int Book::getYear() const { return year; }
void Book::setYear(int year) { this->year = year; }

int Book::getPages() const { return pages; }
void Book::setPages(int pages) { this->pages = pages; }

double Book::getPrice() const { return price; }
void Book::setPrice(double price) { this->price = price; }

std::string Book::getCoverType() const { return coverType; }
void Book::setCoverType(const std::string& coverType) { this->coverType = coverType; }

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "ID: " << book.id << ", Name: " << book.title << ", Author: " << book.author
        << ", Publisher: " << book.publisher << ", Year: " << book.year
        << ", Pages: " << book.pages << ", Cost: " << book.price
        << ", Type: " << book.coverType;
    return os;
}


std::string Book::toString() const {
    return "ID: " + std::to_string(id) + ", Name: " + title + ", Author: " + author +
        ", Publisher: " + publisher + ", Year: " + std::to_string(year) +
        ", Pages: " + std::to_string(pages) + ", Cost: " + std::to_string(price) +
        ", Type: " + coverType;
}

