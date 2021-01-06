#include "Book.h"

Book::Book(){
    Set_keyVector();
}
Book::Book(int bookId, string bookName, float bookPrice){
    this->_Id = bookId;
    this->_bookName = bookName;
    this->_bookPrice = bookPrice;
}
void Book::Set_keyVector(){
    this->_key.resize(3);
    this->_key[0] = "Id";
    this->_key[1] = "Name";
    this->_key[2] = "Price";
}
void Book::Set_valueVector(){
    this->_value = {to_string(this->_Id), this->_bookName, to_string(this->_bookPrice)};
    // cout << "setvaluevector" << endl;
    // _value[0] = to_string(_Id);
    // cout << "setvaluevector1" << endl;
    // this->_value[1] = this->_bookName;
    // cout << "setvaluevector2" << endl;
    // this->_value[2] = to_string(this->_bookPrice);
    // cout << "setvaluevector3" << endl;
}
void Book::GetDataFrom_valueVector(){
    this->_Id = stoi(this->_value[0]);
    this->_bookName = this->_value[1];
    this->_bookPrice = stof(this->_value[2]);
}
TableUnit* Book::ClonePtr(){
    TableUnit* ptr = new Book();
    return ptr;
}
