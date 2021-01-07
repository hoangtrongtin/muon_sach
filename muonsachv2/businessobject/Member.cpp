#include "Member.h"

Member::Member(){
    Set_keyVector();
}
Member::Member(string memberName){
    this->_memberName = memberName;
}
void Member::Set_keyVector(){
    this->_key.resize(2);
    this->_key[0] = "Id";
    this->_key[1] = "Name";
}
void Member::Set_valueVector(){
    this->_value = {to_string(this->_id), this->_memberName};
}
void Member::GetData(vector<string> vValue){// number of elements
    this->_id = stoi(vValue[0]);
    this->_memberName = vValue[1];
}
TableUnit* Member::ClonePtr(){
    TableUnit* ptr = new Member();
    return ptr;
}
