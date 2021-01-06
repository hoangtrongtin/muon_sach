#ifndef project_dataaccess_TableData_H_
#define project_dataaccess_TableData_H_
#include "../businessobject/TableUnit.h"
#include <vector>
#include <string>

using namespace std;

class TableData{
private:
    vector<TableUnit*> _data;
    TableUnit* tableUnit;
public:
    TableData(TableUnit*);
    void PushBack(TableUnit*);
    string ToString();
};

#endif