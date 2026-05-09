#include <iostream>
#include <string>
#include <stdexcept>
using std::cin, std::cout, std::string;

struct Book {
    string title;
    string author;
    int year;
    Book* next;
};

void addBook(Book*& book_list, string book_title, string book_author, int book_year)
{
    Book* new_book = new Book;
    new_book->title = book_title;
    new_book->author = book_author;
    new_book->year = book_year;
    new_book->next = nullptr;
    if (book_list == nullptr)
    {
        book_list = new_book;
    } else {
        Book* b_ptr = book_list;
        while (b_ptr->next != nullptr) b_ptr = b_ptr->next;
        b_ptr->next = new_book;
    }
}

void findBook(Book* book_list, string title)
{
    Book* b_ptr;
    int book_count = 0;
    for (b_ptr = book_list; b_ptr != nullptr; b_ptr = b_ptr->next)
    {
        if (b_ptr->title == title)
        {
            cout << "Book found.\n";
            cout << "Title:  " << b_ptr->title << '\n';
            cout << "Author: " << b_ptr->author << '\n';
            cout << "Year:   " << b_ptr->year << '\n';
            book_count++;
        }
    }
    if (book_count == 0) throw "Book not found! Try again with correct title punctuation.\n";
}


void printBooks(Book* book_list)
{
    cout << "List of Books:\n";
    cout << "\n------------------------------------------------------\n";
    for (Book* b_ptr = book_list; b_ptr != nullptr; b_ptr = b_ptr->next)
    {
        cout << "Title:  " << b_ptr->title << '\n';
        cout << "Author: " << b_ptr->author << '\n';
        cout << "Year:   " << b_ptr->year << '\n';
        cout << "\n";
    }
    cout << "------------------------------------------------------\n";
}

int main()
{   
    Book* library = nullptr;
    addBook(library, "Introduction to Computer Science", "Filippo Ricca", 2025);
    addBook(library, "Mathematical Analysis I", "Angelo Morro", 2025);
    addBook(library, "Computer Architecture", "Fulvio Mastrogiovanni", 2026);
    printBooks(library);

    try 
    {
        findBook(library, "Computer Architecture");
    } catch (const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}