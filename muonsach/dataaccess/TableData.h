#ifndef book_dataaccess_TableData_H_
#define book_dataaccess_TableData_H_

#include<string>
#include<vector>

using namespace std;

class TableData{
private:
public:
    // TableData();
    //virtual void PushBack(auto) = 0;
    virtual string ToString() = 0;
};

#endif