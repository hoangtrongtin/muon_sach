#ifndef project_ui_UI_H_
#define project_ui_UI_H_
#include "../dataaccess/TableData.h"
#include "../businessobject/TableUnit.h"

class UI{
private:
public:
    UI();
    void ReadTable(TableData*);
    void EnterData(TableUnit*);
    void AddToTable(TableData*);
};

#endif