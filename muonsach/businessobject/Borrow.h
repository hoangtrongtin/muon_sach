#ifndef book_businessobject_Borrow_H_
#define book_businessobject_Borrow_H_
#include <string>

using namespace std;

class Borrow{
public:
    int _borrowId;
    int _memberId;
    int _bookId;
    string _borrowDate;
    int _borrowReturn;
public:
    Borrow();
    Borrow(int, int, int, string, int);
};

#endif