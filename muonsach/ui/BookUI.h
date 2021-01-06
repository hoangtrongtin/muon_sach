#ifndef book_ui_BookUI_H_
#define book_ui_BookUI_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "../dataaccess/BookData.h"
#include "../businessobject/Book.h"

class BookUI{
private:
public:
    BookUI();
    void PrintData(BookData);
    Book* DataIn();
    void AddData(BookData);
    void EditData(BookData, int);
};

#endif