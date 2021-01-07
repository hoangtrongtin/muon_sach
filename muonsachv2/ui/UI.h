#ifndef project_ui_UI_H_
#define project_ui_UI_H_
#include "../dataaccess/TableData.h"
#include "../businessobject/TableUnit.h"
#include "../businessobject/TableUnit.h"
#include "../businessobject/Book.h"
#include "../businessobject/Borrow.h"
#include "../dataaccess/TableData.h"
#include <algorithm>
using namespace std;
class UI{
private:
    
    
public:
    UI();
    void Init();
    void ReadTable(TableData*);
    void EnterData(TableUnit*);
    void AddToTable(TableData*);
    void ReadAll();
    void EditTable(TableData*);
    void DeleteTable(TableData*);
    void Q3();
};

#endif