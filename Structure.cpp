#include <iostream>
#include <cstring>
using namespace std;

struct books{
    char title[70];
    char author[60];
    char subject[90];
    int book_id;
};

int main(){
    struct books book1; //declare Book1 of type Book
    struct books book2; // declare Book2 of type Book

    //specification of book1
    strcpy(book1.title, " C++ Programming");
    strcpy(book1.author, "Adekyensroma");
    strcpy(book1.subject, "C++");
    book1.book_id = 64401;

    //specification of book 2
    strcpy(book2.title, "Object-Oriented Programming");
    strcpy(book2.author, "Oduahoma");
    strcpy(book2.subject, "Encapsulation");
    book2.book_id = 66231;

    //Print
    cout << "Booktitle : " << book1.title << endl;
    cout << "Bookauthor: " << book1.author << endl;
    cout << "Booksubject: " << book1.subject << endl;
    cout << "Bookid: " << book1.book_id << endl;

    //Print
    cout << "Booktitle: " << book2.title << endl;
    cout << "Bookauthor: " << book2.author << endl;
    cout << "Booksubject: " << book2.subject << endl;
    cout << "Bookid: " << book2.book_id << endl;
    return 0;
}