#include "LinkedList.h"


Node::Node() {
    value = 0;
    next = NULL;
}

Node::Node(int val) {
    value = val;
    next = NULL;
}


LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
}

void LinkedList::addToHead(int elem) {
    Node* temp = new Node(elem);
    if(head == NULL) {
        head = tail = temp;
    }
    temp -> next = head;
    head = temp;
}

void LinkedList::addToTail(int elem) {
    Node* temp = new Node(elem);
    if(head == NULL) {
        head = tail = temp;
    }
    else {
    tail->next = temp;
    tail = temp;
    }
}

void LinkedList::print() {
    Node* ptr = head;
    while(ptr != NULL) {  // traverse the list
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
}

int LinkedList::size() {
    Node* ptr = head;
    int count = 0;
    while(ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void LinkedList::insertAt(int elem, int index) {
    assert(index >= 0);
    if (index == 0)
        addToHead(elem);
    else {
        Node* ptr = head;
        for(int i=1; i<index; i++) {
            assert(ptr!=NULL);
            ptr = ptr -> next;
        }
        assert(ptr != NULL);
        if(ptr == tail)
            addToTail(elem);
        else {
            Node* inserted = new Node(elem);
            inserted->next = ptr->next;
            ptr->next = inserted;
        }
    }
}

















int main() {
    LinkedList list;

    return 0;
}