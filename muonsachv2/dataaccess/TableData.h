#ifndef project_dataaccess_TableData_H_
#define project_dataaccess_TableData_H_
#include "../businessobject/TableUnit.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class TableData{
private:
    vector<TableUnit*> _data;
    string _tableName;
    TableUnit* _tableUnit;
    int _maxId;
public:
    TableData(TableUnit*, string);
    TableUnit* CloneTableUnitPtr();
    void PushBack(TableUnit*);
    string ToString();//
    vector<TableUnit*> Get_data();
    string GetName();
    TableUnit* Get_unit(int);
    int Get_unitPos(int);
    void Del(int);
    int Backup();
    int Restore();
};

#endif