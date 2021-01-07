#include "Book.h"

Book::Book(){
    Set_keyVector();
}
Book::Book(string bookName, float bookPrice){
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
    this->_value = {to_string(this->_id), this->_bookName, to_string(this->_bookPrice)};
}
void Book::GetData(vector<string> vValue){// number of elements
    this->_id = stoi(vValue[0]);
    this->_bookName = vValue[1];
    this->_bookPrice = stof(vValue[2]);
}
TableUnit* Book::ClonePtr(){
    TableUnit* ptr = new Book();
    return ptr;
}
