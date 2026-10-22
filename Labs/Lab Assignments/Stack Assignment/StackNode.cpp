#include <iostream>
using namespace std;


class StackNode
{
    public:
    int data;
    StackNode* next;
    StackNode();
    StackNode(int);
};


StackNode::StackNode() {
    data = 0;
    next = NULL;
}

StackNode::StackNode(int value) {
    data = value;
    next = NULL;
}

class LinkedStack
{
    public:
    int size;
    StackNode* head;

    LinkedStack();
    ~LinkedStack();
    bool isEmpty();
    void push(int);
    int top();
    int pop();
    void clear();

};


LinkedStack::LinkedStack() {
    size = 0;
    head = NULL;
}

bool LinkedStack::isEmpty() {
   return size==0;
}

void LinkedStack::push(int value) {
    if(head == NULL)
        head = new StackNode(value);
    else{
        StackNode* node = new StackNode(value);
        node->next = head;
        head = node;
    }
    size++;
}

int LinkedStack::top()
{
    return head->data;
}

int LinkedStack::pop()
{
    if(isEmpty()){
        cout<<"Not Valid!";
        exit(1);
    }
    int x=head->data;
    StackNode* temp=head;
    head = head->next;
    delete[] temp;
    size--;
    return x;
    

}

void LinkedStack::clear()
{
    for(int i=0;i<size;i++){
        pop();
    }
}

LinkedStack::~LinkedStack()
{
    delete [] head;
}


int main() {
    LinkedStack soso;
    soso.push(22);
    soso.push(31);
    soso.push(64);
    cout<< soso.size << endl;
    cout<< soso.top() << endl;
    cout<< soso.pop() << endl;
    cout<< soso.pop() << endl;
    cout<< soso.size;




}