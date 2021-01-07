#ifndef project_businessobject_Book_H_
#define project_businessobject_Book_H_

#include "TableUnit.h"
#include <string>

using namespace std;

class Book: public TableUnit{
private:
    string _bookName;
    float _bookPrice;
public:
    Book();
    Book(string, float);
    void Set_keyVector() override;
    void Set_valueVector() override;
    void GetData(vector<string>) override;
    TableUnit* ClonePtr() override;
};


#endif