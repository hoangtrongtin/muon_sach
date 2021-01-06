#include "Borrow.h"

Borrow::Borrow(){}
Borrow::Borrow(int borrowId, int memberId, int bookId, string borrowDate, int borrowReturn){
    _borrowId = borrowId;
    _memberId = memberId;
    _bookId = bookId;
    _borrowDate = borrowDate;
    _borrowReturn = borrowReturn;
}