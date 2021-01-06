#ifndef book_ui_UI_H_
#define book_ui_UI_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "../dataaccess/TableData.h"

using namespace std;

class UI{
private:
public:
    UI();
    void printUnit(TableData*);
    void printData(TableData* tData);
};

#endif