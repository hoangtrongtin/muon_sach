#include "Menu.h"

Menu::Menu(){}
void Menu::Initial(){
    TableUnit* book1 = new Book("book1", 150);
    TableUnit* book2 = new Book("book2", 250);
    bookData = new TableData(new Book, "Book Table");
    bookData->PushBack(book1);
    bookData->PushBack(book2);
    
    TableUnit* borrow1 = new Borrow(1, 11, 111, "2001");
    TableUnit* borrow2 = new Borrow(1, 22, 222, "2002");
    TableUnit* borrow3 = new Borrow(-1, 33, 333, "2003");
    TableUnit* borrow4 = new Borrow(1, 44, 444, "2004");
    TableUnit* borrow5 = new Borrow(-1, 34, 333, "2005");
    borrowData = new TableData(new Borrow, "Borrow Table");
    borrowData->PushBack(borrow1);
    borrowData->PushBack(borrow2);
    borrowData->PushBack(borrow3);
    borrowData->PushBack(borrow4);
    borrowData->PushBack(borrow5);

    TableUnit* member1 = new Member("Thuong");
    TableUnit* member2 = new Member("Tin");
    TableUnit* member3 = new Member("Linh");
    memberData = new TableData(new Member, "Member Table");
    memberData->PushBack(member1);
    memberData->PushBack(member2);
    memberData->PushBack(member3);

    _tableData.push_back(bookData);
    _tableData.push_back(borrowData);
    _tableData.push_back(memberData);
}
void Menu::Show(){
    int menuSelect = 0;
    do{
        // system("cls"); 
        cout << "Select Menu: " << endl;
        cout << "0. Quit." << endl;
        cout << "1. Add, Edit, Delete, Read Table." << endl;
        cout << "2. Back up, Restore." << endl;
        cin >> menuSelect; cin.ignore();
        if(menuSelect == 0) break;
        switch (menuSelect){
            case 1:
                Q1();
                break;
            case 2:
                Q2();
                break;
            default:
                cout << "Wrong selection, do it again!" << endl; 
        }     
        system("pause");      
    }while(true);   

}
void Menu::Q1(){
    UI myUI;
    int q1Select = 0;
    int tableSelect= 0;
    do{
        cout << " Select option: " << endl;
        cout << "0. Quit." << endl;
        cout << "1. Add." << endl;
        cout << "2. Edit." << endl;
        cout << "3. Delete." << endl;
        cout << "4. Read." << endl;
        cin >> q1Select; cin.ignore();
        if (q1Select < 0 || q1Select > 4){
            cout << "Wrong Selection! "<< endl;
            continue;
        }
        else if (q1Select == 0) break;
        else
        do{
            cout << " Selectable: " << endl;
            cout << " 0. Quit."  << endl;
            cout << " 1. Book." << endl;
            cout << " 2. Borrow." << endl;
            cout << " 3. Member." << endl;
            cin >> tableSelect; cin.ignore();
            if (tableSelect < 0 || tableSelect > 3){
                cout << "Wrong Selection! " << endl;
                continue;
            }
            else if (tableSelect == 0) break;
            else{
                TableData* table = _tableData[tableSelect-1];
                switch (q1Select){
                    case 1:
                        myUI.AddToTable(table);
                        break;
                    case 2:
                        myUI.EditTable(table);
                        break;
                    case 3:
                        myUI.DeleteTable(table);
                        break;
                    case 4:
                        myUI.ReadTable(table);
                        break;
                }
            }
        }while(true);
        
        
    }while(true);
    
}
void Menu::Q2(){
    UI myUI;
    int q2Select = 0;
    int tableSelect = 0;
    do{
        cout << " Select option: " << endl;
        cout << " 0. Quit." << endl;
        cout << " 1. Back up." << endl;
        cout << " 2. Restore." << endl;
        cin >> q2Select; cin.ignore();
        if(q2Select == 0) break;
        else if (q2Select < 0 || q2Select > 2) {
            cout << " Wrong selection, do it again." << endl;
            continue;
        }
        else if (q2Select == 1){
            for (auto pTD: _tableData){
                myUI.Backup(pTD);
            }
            break;
        }
        else if (q2Select == 2){
            do{
                cout << " Selectable: " << endl;
                cout << " 0. Quit."  << endl;
                cout << " 1. Book." << endl;
                cout << " 2. Borrow." << endl;
                cout << " 3. Member." << endl;
                cin >> tableSelect; cin.ignore();
                if (tableSelect < 0 || tableSelect > 3){
                    cout << "Wrong Selection! " << endl;
                    continue;
                }
                if (tableSelect == 0) break;
                myUI.Restore(_tableData[tableSelect-1]);
            }while(true);
        }
    }while(true);
    
}