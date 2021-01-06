#include "TableUnit.h"

TableUnit::TableUnit(){
    _key.clear();
    _value.clear();
}
string TableUnit::ToString(){
    SetValueVector();
    string s ="";
    for(auto element: _value) s += element + " ";
    return s;
}