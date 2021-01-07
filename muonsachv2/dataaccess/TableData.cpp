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
    return s;
}
vector<string> DecodeFromFile(string s){
    vector<string> vs;
    string stemp ="";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '$') stemp += s[i];
        else{
            vs.push_back(stemp);
            // cout << stemp << endl;
            stemp = "";
        }
    }
    // cout << vs.size() << endl;
    // for(auto vi: vs){cout << vi << endl;}
    return vs;
}
int TableData::Backup(){
    string filepath = "data/" + _tableName + ".data";
    ofstream outFile(filepath);
    if(!outFile) return 0;
    for(TableUnit* pTU: _data){
        pTU->Set_valueVector();
        vector<string> vs = pTU->Get_valueVector();
        outFile << EncodeToFile(vs) << endl;
    }
    outFile.close();
    return 1;
}
int TableData::Restore(){
    string filepath = "data/" + _tableName + ".data";
    ifstream inFile(filepath);
    if(!inFile) return 0;
    _data.clear();
    const int maxSize = 255;
    char buff[maxSize];
    while(inFile.getline(buff, maxSize)){
        vector<string> vs = DecodeFromFile(buff);
        // cout << buff << endl;
        TableUnit* pTU = _tableUnit->ClonePtr();
        pTU->GetData(vs);
        _data.push_back(pTU);
    }
    inFile.close();
    return 1;
}