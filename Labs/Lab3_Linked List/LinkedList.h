#include <iostream>
#include <cassert>
using namespace std;






struct Node {
    int value;
    Node* next;
    Node();
    Node(int val);
};


class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList();
    void addToHead(int elem);
    void addToTail(int elem);
    void print();
    int size();
    void insertAt(int elem, int index);
};