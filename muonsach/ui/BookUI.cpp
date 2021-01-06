#include "BookUI.h"

BookUI::BookUI(){}

void BookUI::PrintData(BookData bkData){
    cout << bkData.ToString() << endl;
}
Book* BookUI::DataIn(){
    Book* book = new Book();
    cout << "Enter Book Id: ";
    int bookId; cin >> book->_bookId; cin.ignore();
    cout << "Enter Book Name: ";
    string bookName; cin >> book->_bookName; cin.ignore();
    cout << "Enter Book Price: ";
    float bookPrice; cin >> book->_bookPrice; cin.ignore();
    return book;
}
void BookUI::AddData(BookData bkData){
    Book* book = DataIn();
    bkData.PushBack(*book);
    cout << bkData.ToString() << endl;    
}
void BookUI::EditData(BookData bkData, int bookId){
    cout << "Edit Book " << endl;
    cout << "Enter Book Id" << endl;
    
}