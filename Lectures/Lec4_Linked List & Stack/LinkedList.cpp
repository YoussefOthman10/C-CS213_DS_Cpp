#include <iostream>
using namespace std;

// Search in Singly Linked List (SLL)
// O(n)
bool search(int value) {
    IntNode* ptr = head;
    while(ptr != 0 && ptr->info != value)
        ptr = ptr -> next;
    return ptr != 0;
}