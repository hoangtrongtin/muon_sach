#ifndef project_ui_Menu_H_
#define project_ui_Menu_H_
#include "../businessobject/TableUnit.h"
#include "../businessobject/Book.h"
#include "../businessobject/Borrow.h"
#include "../businessobject/Member.h"
#include "../dataaccess/TableData.h"
#include "UI.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Menu{
private:
    TableData* bookData;
    TableData* borrowData;
    TableData* memberData;
    vector<TableData*> _tableData;
public:
    Menu();
    void Initial();
    void Show();
    void Q1();
    void Q2();
};

#endif