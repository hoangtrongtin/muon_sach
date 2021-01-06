#include "TableData.h"

TableData::TableData(TableUnit* pTU){
    _data.clear();
    tableUnit = pTU->ClonePtr();
}
string TableData::ToString(){
    string s = "";
    for(auto pTU: _data) s += pTU->ToString() + '\n';
    s.erase(s.length()-2, 2);
    return s;
}
void TableData::PushBack(TableUnit* pTU){
    _data.push_back(pTU);
}