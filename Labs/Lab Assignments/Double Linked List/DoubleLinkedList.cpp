#include <iostream>
#include <cassert>
using namespace std;

struct DLLNode {
    int value;
    DLLNode* prev;
    DLLNode* next;
};

class DLL {
    DLLNode* head;
    DLLNode* tail;

public:
    void insertAt(int, int);


};


void DLL::insertAt(int value, int index) {
    assert(index>=0);
    if(index==0)
        addToHead();
    return;

    DLLNode* ptr = head;
    for(int i = 1; i<index; i++) {
        if(ptr->next != NULL)
            ptr = ptr->next;
    }
    DLLNode* Noda = new DLLNode();
    Noda->next = ptr->next;
    Noda ->prev = ptr;
    
    ptr-> next = Noda;










}




void addToTail(int val) {
    

}