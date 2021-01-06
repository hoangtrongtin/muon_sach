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
    virtual void CreateKeyVector() = 0;
    virtual void SetValueVector() = 0;
    virtual void GetValueVector() = 0;
    virtual TableUnit* ClonePtr() = 0;

    string ToString();
};

#endif