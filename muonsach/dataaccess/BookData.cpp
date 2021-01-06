#include "BookData.h"

BookData::BookData(){}

void BookData::PushBack(Book book){
    _bookData.push_back(book);
}
string BookData::ToString(){
    string s = "";
    for(auto book: _bookData){
        s += book.ToString() + "\n";
    }
    s.erase(s.length()-2, 2);
    return s;
}