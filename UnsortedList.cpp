
#include "UnsortedList.h"

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == someItem) {
            return true;
        }
    }
    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    arr[length] = item;
    length ++;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == item) {
            arr[i] = arr[length - 1];
            length --;
            return;
        }
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = 0;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    int nextItem = arr[currentPos];
    currentPos ++;
    return nextItem;
}



























