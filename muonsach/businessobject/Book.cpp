#include "Book.h"

Book::Book(){}
Book::Book(int bookId, string bookName, float bookPrice){
    _bookId = bookId;
    _bookName = bookName;
    _bookPrice = bookPrice;
}
string Book::ToString(){
    string s = "";
    s = to_string(_bookId) + " " + _bookName + " " + to_string(_bookPrice);
    return s;
}