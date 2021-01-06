#include "TableUnit.h"

TableUnit::TableUnit(){
    _key.clear();
    _value.clear();
}
vector<string> TableUnit::Get_keyVector(){
    return _key;
}
vector<string> TableUnit::Get_valueVector(){
    return _value;
}
string TableUnit::ToString(){
    Set_valueVector();
    string s ="";
    for(auto element: _value) s += element + " ";
    return s;
}
void TableUnit::SetValue(int pos, string value){
    _value[pos] = value;
}