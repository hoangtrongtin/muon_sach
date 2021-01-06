#ifndef book_businessobject_Book_H_
#define book_businessobject_Book_H_
#include <string>

using namespace std;

class Book{
public:
    int _bookId;
    string _bookName;
    float _bookPrice;
public:
    Book();
    Book(int, string, float);
    string ToString();
};

#endif