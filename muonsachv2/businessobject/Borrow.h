#ifndef project_businessobject_Borrow_H_
#define project_businessobject_Borrow_H_

#include "TableUnit.h"
#include <string>

using namespace std;

class Borrow: public TableUnit{
private:
    int _borrowReturn;
    int _memberId;
    int _bookId;
    string _borrowDate;
public:
    Borrow();
    Borrow(int, int, int, string);

    void Set_keyVector() override;
    void Set_valueVector() override;
    void GetData(vector<string>) override;
    TableUnit* ClonePtr() override;
    int Get_BorrowReturn();
    int Get_BookId();
};


#endif