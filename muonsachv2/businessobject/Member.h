#ifndef project_businessobject_Member_H_
#define project_businessobject_Member_H_

#include "TableUnit.h"
#include <string>

using namespace std;

class Member: public TableUnit{
private:
    string _memberName;
public:
    Member();
    Member(string);
    void Set_keyVector() override;
    void Set_valueVector() override;
    void GetData(vector<string>) override;
    TableUnit* ClonePtr() override;
};


#endif