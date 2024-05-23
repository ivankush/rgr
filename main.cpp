#include "Library.h"
#include "Book.h"
#include <iostream>


int main() {
    Library library("library_log.txt");

    library.addBook(Book(1, "Book 1", "Author A", "Publisher X", 2001, 300, 150.00, "Q"));
    library.addBook(Book(2, "Book 2", "Author B", "Publisher Y", 1999, 250, 250.00, "W"));
    library.addBook(Book(3, "Book 3", "Author C", "Publisher Z", 2010, 400, 800.20, "E"));
    library.addBook(Book(4, "Book 4", "Author A", "Publisher X", 2022, 100, 500.00, "Q"));
    library.addBook(Book(5, "Book 5", "Author B", "Publisher Y", 1988, 458, 780.00, "W"));
    library.addBook(Book(6, "Book 6", "Author C", "Publisher Z", 2008, 963, 980.00, "E"));

    auto allBooks = library.getAllBooks();
    std::cout << "All books in the library:" << std::endl;
    for (const auto& book : allBooks) {
        std::cout << book << std::endl;
    }

    auto booksByAuthor = library.getBooksByAuthor("Author B");
    std::cout << "Books by Author B:" << std::endl;
    for (const auto& book : booksByAuthor) {
        std::cout << book << std::endl;
    }

    auto booksByPublisher = library.getBooksByPublisher("Publisher Z");
    std::cout << "Books by Publisher Z:" << std::endl;
    for (const auto& book : booksByPublisher) {
        std::cout << book << std::endl;
    }

    auto booksAfterYear = library.getBooksAfterYear(2000);
    std::cout << "Books after the year 2005:" << std::endl;
    for (const auto& book : booksAfterYear) {
        std::cout << book << std::endl;
    }

    library.saveBooksToFile("books.txt");

    return 0;
}
