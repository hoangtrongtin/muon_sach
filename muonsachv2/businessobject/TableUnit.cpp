#include "TableUnit.h"

void TableUnit::Set_id(int id){
    _id = id;
}
TableUnit::TableUnit(){
    _key.clear();
    _value.clear();
}
vector<string> TableUnit::Get_keyVector(){
    Set_keyVector();
    return _key;
}
vector<string> TableUnit::Get_valueVector(){
    Set_valueVector();
    return _value;
}
string TableUnit::ToString(){
    Set_valueVector();
    string s ="";
    for(string element: _value) s += element + " ";
    return s;
}
string TableUnit::KeyToString(){
    Set_keyVector();
    string s ="";
    for(string element: _key) s += element + " ";
    return s;
}
void TableUnit::SetValue(int pos, string value){
    _value[pos] = value;
}
int TableUnit::Get_ID(){
    return _id;
}