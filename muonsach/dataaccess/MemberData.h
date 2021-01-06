#ifndef book_dataaccess_MemberData_H_
#define book_dataaccess_MemberData_H_

#include<string>
#include<vector>
#include "../businessobject/Member.h"
class MemberData{
private:
public:
    vector<Member*> _memberData;
    MemberData();
};

#endif