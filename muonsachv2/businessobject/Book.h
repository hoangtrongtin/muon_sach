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
    Book(int, string, float);
    void CreateKeyVector() override;
    void SetValueVector() override;
    void GetValueVector() override;
    TableUnit* ClonePtr() override;
};


#endif