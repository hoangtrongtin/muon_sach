#include <iostream>
#include <string>
#include <vector>

#include "businessobject/TableUnit.h"
#include "businessobject/Book.h"
#include "dataaccess/TableData.h"

using namespace std;

int main(){
    TableUnit* book1 = new Book(1,"book1", 150);
    TableUnit* book2 = new Book(2,"book2", 250);
    TableData* bookData = new TableData(book1);
    bookData->PushBack(book1);
    bookData->PushBack(book2);
    cout << "Hello World" << endl;
    cout << book1->ToString();
    cout << "done" << endl;
    cout << bookData->ToString() << endl;
    cout << "done" << endl;
    return 0;
}