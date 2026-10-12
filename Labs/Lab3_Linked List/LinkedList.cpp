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
    tail->next = temp;
    tail = temp;
}


















int main() {
    LinkedList list;

    return 0;
}