#include "TableData.h"

TableData::TableData(TableUnit* pTU, string tableName){
    _data.clear();
    _tableName = tableName;
    _tableUnit = pTU->ClonePtr();
    _maxId = 0;
}
string TableData::GetName(){
    return _tableName;
}
TableUnit* TableData::CloneTableUnitPtr(){
    TableUnit* pTU = _tableUnit->ClonePtr();
    return pTU;
}
// string TableData::ToString(){
//     string s = "";
//     for(auto pTU: _data) s += pTU->ToString() + '\n';
//     s.erase(s.length()-2, 2);
//     return s;
// }
string TableData::ToString(){
    string s = "";
    for(int i = 0; i < _data.size(); i++){
        TableUnit* pTU = _data[i];
        //if (i == 0) s += pTU->KeyToString() + '\n';
        s += pTU->ToString() + '\n';
    }
    s.erase(s.length()-2, 2);
    return s;
}
void TableData::PushBack(TableUnit* pTU){
    pTU->Set_id(++_maxId);
    _data.push_back(pTU);
}
// void TableData::PushBackID(TableUnit* pTU){
//     _data.push_back(pTU);
// }
vector<TableUnit*> TableData::Get_data(){
    return _data;
}
TableUnit* TableData::Get_unit(int id){
    for(auto pTU: _data){
        if(pTU->Get_ID() == id) return pTU;
    }
    return nullptr;
}
int TableData::Get_unitPos(int id){
    int i = 0;
    for(auto pTU: _data){
        if(pTU->Get_ID() == id) return i;
        ++i;
    }
    return -1;
}
void TableData::Del(int i){
    delete(_data[i]);
    _data.erase(_data.begin() + i);

}
string EncodeToFile(vector<string> vs){
    string s = "";
    for(string si: vs) s += si + '$';
    //s.erase(s.length(), 1);
}
vector<string> DecodeFromFile(string s){
    vector<string> vs;
    string stemp ="";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '$') stemp += s;
        else{
            vs.push_back(stemp);
            stemp = "";
        }
    }
}
void TableData::Backup(){
    
}