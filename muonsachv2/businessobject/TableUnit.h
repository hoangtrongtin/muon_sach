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
    //TableUnit* _unitPtr;
    int _id;
public:
    TableUnit();
    virtual void Set_keyVector() = 0;
    virtual void Set_valueVector() = 0;
    virtual void GetData(vector<string>) = 0;
    virtual TableUnit* ClonePtr() = 0;

    void Set_id(int);
    vector<string> Get_keyVector();
    vector<string> Get_valueVector();
    string ToString();
    string KeyToString();
    void SetValue(int, string);
    int Get_ID();
};

#endif