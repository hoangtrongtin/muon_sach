#include "Borrow.h"

Borrow::Borrow(){
    Set_keyVector();
}
Borrow::Borrow(int borrowReturn, int memberId, int bookId, string borrowDate){
    this->_borrowReturn = borrowReturn;
    this->_memberId = memberId;
    this->_bookId = bookId;
    this->_borrowDate = borrowDate;
}
void Borrow::Set_keyVector(){
    this->_key.resize(5);
    this->_key[0] = "Id";
    this->_key[1] = "Borrow/Return";
    this->_key[2] = "Member Id";
    this->_key[3] = "Book Id";
    this->_key[4] = "Borrow Date";
}
void Borrow::Set_valueVector(){
    this->_value = {to_string(this->_id), to_string(this->_borrowReturn), to_string(this->_memberId), to_string(this->_bookId), _borrowDate};
}
void Borrow::GetData(vector<string> vValue){// number of elements
    this->_id = stoi(vValue[0]);
    this->_borrowReturn = stoi(vValue[1]);
    this->_memberId = stoi(vValue[2]);
    this->_bookId = stoi(vValue[3]);
    this->_borrowDate = vValue[4];
}
TableUnit* Borrow::ClonePtr(){
    TableUnit* ptr = new Borrow();
    return ptr;
}

int Borrow::Get_BorrowReturn(){
    return _borrowReturn;
}
int Borrow::Get_BookId(){
    return _bookId;
}