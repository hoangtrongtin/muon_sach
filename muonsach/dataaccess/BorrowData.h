#ifndef book_dataaccess_BorrowData_H_
#define book_dataaccess_BorrowData_H_

#include<string>
#include<vector>
#include "../businessobject/Borrow.h"
class BorrowData{
private:
public:
    vector<Borrow*> _borrowData;
    BorrowData();
};

#endif