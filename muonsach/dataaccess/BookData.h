#ifndef book_dataaccess_BookData_H_
#define book_dataaccess_BookData_H_

#include<string>
#include<vector>
#include "../businessobject/Book.h"
#include "TableData.h"

class BookData : public TableData{
private:
public:
    vector<Book> _bookData;
    BookData();
    void PushBack(Book);
    string ToString() override;
};

#endif