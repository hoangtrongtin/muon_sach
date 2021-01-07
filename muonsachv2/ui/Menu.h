#ifndef project_ui_Menu_H_
#define project_ui_Menu_H_
#include "../dataaccess/TableData.h"
#include "../businessobject/TableUnit.h"
#include "../businessobject/TableUnit.h"
#include "../businessobject/Book.h"
#include "../businessobject/Borrow.h"
#include "../dataaccess/TableData.h"
#include "UI.h"
#include <iostream>
#include <string>
using namespace std;

class Menu{
private:
    TableData* bookData;
    TableData* borrowData;
    vector<TableData*> _tableData;
public:
    Menu();
    void Initial();
    void Show();
    void Q1();
    void Q2();
};

#endif