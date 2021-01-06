#include <iostream>
#include <string>
#include <vector>
#include "businessobject/Book.h"
#include "dataaccess/BookData.h"
#include "dataaccess/TableData.h"
#include "ui/BookUI.h"

using namespace std;

int main(){
    // Book book1 = new Book(1, "book1", 150);
    // Book book2 = new Book(2, "book2", 250);
    // Book book3 = new Book(3, "book3", 350);
    // Book book4 = new Book(4, "book4", 450);
    // Book book5 = new Book(5, "book5", 550);
    Book book1(1, "book1", 150);
    Book book2(2, "book2", 250);
    Book book3(3, "book3", 350);
    Book book4(4, "book4", 450);
    Book book5(5, "book5", 550);
    //TableData bookData = new BookData();
    BookData bookData;
    bookData.PushBack(book1);
    bookData.PushBack(book2);
    bookData.PushBack(book3);
    bookData.PushBack(book4);
    bookData.PushBack(book5);
    

    cout << "Hello" << endl;
    BookUI myBookUI;
    myBookUI.PrintData(bookData);
    // cout << bookData.ToString();
    myBookUI.AddData(bookData);
    return 0;
}