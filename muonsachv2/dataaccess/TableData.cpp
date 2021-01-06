#include "TableData.h"

TableData::TableData(TableUnit* pTU){
    _data.clear();
    tableUnit = pTU->ClonePtr();
}
TableUnit* TableData::CloneTableUnitPtr(){
    TableUnit* pTU = tableUnit->ClonePtr();
    return pTU;
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