#ifndef book_businessobject_Member_H_
#define book_businessobject_Member_H_
#include <string>

using namespace std;

class Member{
public:
    int _memberId;
    string _memberName;
public:
    Member();
    Member(int, string);
};

#endif