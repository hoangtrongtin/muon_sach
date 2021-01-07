#include "UI.h"

UI::UI(){}
void UI::Init(){}
void UI::ReadTable(TableData* pTD){
    //cout << pTD->ToString() << endl;
    vector<TableUnit*> vpTU = pTD->Get_data();
    for(int i = 0; i < vpTU.size(); i++){
        TableUnit* pTU = vpTU[i];
        if (i == 0){
            vector<string> keyVector = pTU->Get_keyVector();
            cout << endl << pTD->GetName() << endl;
            cout << string(15*keyVector.size(), '-') << endl;
            for(int j = 0; j < keyVector.size(); j++){
                cout << setw(15) << left << keyVector[j];
            }
            cout << endl << string(15*keyVector.size(), '=') << endl;
        }
        vector<string> valueVector = pTU->Get_valueVector();
        for(int j = 0; j < valueVector.size(); j++){
            cout << setw(15) << left << setprecision(2) << fixed << valueVector[j];
        }
        cout << endl << string(15*valueVector.size(), '-') << endl;
    }
}
void UI::EnterData(TableUnit* pTU){
    vector<string> keyVector = pTU->Get_keyVector();
    vector<string> valueVector;
    valueVector.resize(keyVector.size(),"0");
    int fail = 10;
    for(int i = 1; i < keyVector.size(); i++){
        fail = 3;
        do{
            try{
                cout << "Enter " << keyVector[i] << ": ";
                string s = ""; getline(cin, s);
                //valueVector.push_back(s);
                valueVector[i] = s;
                pTU->GetData(valueVector);
                break;
            } catch(...) {}
            cout << "sai kieu moi nhap lai " <<endl;
        } while (--fail);
        if(fail == 0){ cout << "DCM" << fail<<endl; }
    }
    //pTU->GetData(valueVector);    
}
void UI::AddToTable(TableData* pTD){
    TableUnit* pTU = pTD->CloneTableUnitPtr();
    EnterData(pTU);
    // cout << pTU->ToString() << endl;
    pTD->PushBack(pTU);
    cout << " Add to " + pTD->GetName() << " done!" << endl;
}
void UI::EditTable(TableData* pTD){
    cout << "Enter Id: ";
    int id = 0; cin >> id; cin.ignore();
    TableUnit* pTU = pTD->Get_unit(id);
    if (pTU == nullptr){
        cout << " Id not found!" << endl;
        return;
    }
    cout << pTU->ToString() << endl;
    EnterData(pTU);
    pTU->Set_id(id);
    cout << "Edit done!" << endl;
}
void UI::DeleteTable(TableData* pTD){
    cout << "Enter Id: ";
    int id = 0; cin >> id; cin.ignore();
    TableUnit* pTU = pTD->Get_unit(id);
    if (pTU == nullptr){
        cout << " Id not found!" << endl;
        return;
    }
    int _id = pTD->Get_unitPos(id);
    pTD->Del(_id);
    cout << " Delete done" << endl;
    cout << pTD->ToString() << endl;
}
void UI::Backup(TableData* pTD){
    int result = pTD->Backup();
    if (result == 1) cout << " Back up " << pTD->GetName() << " done!" << endl;
    else cout << " Back up " << pTD->GetName() << " fail!" << endl;
}
void UI::Restore(TableData* pTD){
    int result = pTD->Restore();
    if (result == 1) cout << " Restore " << pTD->GetName() << " done!" << endl;
    else cout << " Restore " << pTD->GetName() << " fail!" << endl;
}
//void UI::Q3(){
    // vector<TableUnit*> vpTU = borrowData->Get_data();
    // int vSize = vpTU.size();
    // vector<int> borrowTime;
    // borrowTime.resize(vpTU.size(), 0);
    // for(int i = 0; i < vSize; i++){
    //     TableUnit* pTUi = vpTU[i];
    //     pTUi->Set_valueVector();
    //     string _bookIdi = pTUi->Get_valueVector()[3];
    //     for(int j = 0; j < vSize; j++){
    //         TableUnit* pTUj = vpTU[j];
    //         pTUj->Set_valueVector();
    //         string _bookIdj = pTUj->Get_valueVector()[3];
    //         if (_bookIdi == _bookIdj) ++borrowTime[i];
    //     }
    // }
    // int maxBorrowTime = 0;
    // for(int i = 0; i < borrowTime.size(); i++){
    //     if (borrowTime[i] > maxBorrowTime) maxBorrowTime = borrowTime[i];
    // }
    // // vector<int> collectMaxBorrowTime;
    // if (maxBorrowTime > 1){
    //     for(int i = 0; i < borrowTime.size(); i++){
    //         if (borrowTime[i] == maxBorrowTime){
    //             Borrow* newborrow = (Borrow*) vpTU[i];
    //             cout << vpTU[i]->ToString() << endl;
    //             break;
    //         }
    //     }
    // }
    // else cout << " moi sach chi muon 1 lan" <<endl;

    /*vector<TableUnit*> borrows = borrowData->Get_data();
    map<int, int> mapIDCount;
    for(TableUnit *unit :borrows){
        Borrow* borrow = (Borrow*) unit;
        if(borrow->Get_BorrowReturn() == 1){
            mapIDCount[borrow->Get_BookId()] = mapIDCount[borrow->Get_BookId()] + 1;
        }
    }

    // map<int, Book*> mapIDBook;
    // for(TableUnit *unit :books){
    //     Book* book = (Book*) unit;
    //     mapIDBook[book->Get_ID()] = book;
    // }

    vector<TableUnit*> books = bookData->Get_data();
    // sort(books.begin(), books.end(), [&mapIDCount](Book* a, Book* b){return mapIDCount[a->Get_ID()] > mapIDCount[b->Get_ID()];})*/

//}