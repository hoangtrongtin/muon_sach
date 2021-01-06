#ifndef project_businessobject_TableUnit_H_
#define project_businessobject_TableUnit_H_

#include <map>
#include <vector>
#include <string>
#include <iostream>/////

using namespace std;

class TableUnit{
protected:
    // map<string, string> _unitData;
    vector<string> _key;
    vector<string> _value;
    TableUnit* _unitPtr;
    int _Id;
public:
    TableUnit();
    virtual void Set_keyVector() = 0;
    virtual void Set_valueVector() = 0;
    virtual void GetDataFrom_valueVector() = 0;
    virtual TableUnit* ClonePtr() = 0;

    vector<string> Get_keyVector();
    vector<string> Get_valueVector();
    string ToString();
    void SetValue(int, string);
};

#endif