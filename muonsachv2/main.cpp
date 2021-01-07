#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "businessobject/TableUnit.h"
#include "businessobject/Book.h"
#include "businessobject/Borrow.h"
#include "dataaccess/TableData.h"
#include "ui/UI.h"
#include "ui/Menu.h"

using namespace std;

int main(){

    UI myUI;
    // myUI.ReadTable(bookData);
    // cout << "done" <<endl;
    // myUI.AddToTable(bookData);
    // // cout << "Add done" << endl;
    // // myUI.ReadTable(bookData);
    // cout << endl;
    // myUI.ReadTable(borrowData);
    // myUI.Init();
    // myUI.ReadAll();
    // myUI.EditTable();
    cout << "_____________________________________________________" << endl;
    // myUI.Q3();
    Menu myMenu;
    myMenu.Initial();
    myMenu.Show();

    return 0;
}