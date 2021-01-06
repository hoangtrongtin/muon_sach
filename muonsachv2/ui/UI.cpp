#include "UI.h"

UI::UI(){}

void UI::ReadTable(TableData* pTD){
    cout << pTD->ToString() << endl;
}
void UI::EnterData(TableUnit* pTU){
    vector<string> keyVector = pTU->Get_keyVector();
    vector<string> valueVector = pTU->Get_valueVector();
    for(int i = 0; i < keyVector.size(), i++){
        cout << "Enter " << "key" << ": ";
        string s = ""; getline(cin, s);
        pTU->SetValue(i, s);
    }
}
void UI::AddToTable(TableData* pTD){
    TableUnit* pTU = pTD->CloneTableUnitPtr();
    EnterData(pTU);
    pTD->PushBack(pTU);
}