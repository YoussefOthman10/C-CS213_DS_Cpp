#include <iostream>
using namespace std;


class IntNode
{
public:
    int info;
    IntNode* next;


    IntNode()
    {
        next = 0;
    }
    IntNode (int n, IntNode* in = 0)
    {
        info = n;
        next = in;
    }
};


int main() {
    IntNode* head = new IntNode(10);  // new IntNode returns the address of the newly dynamically allocated node
    head -> next = new IntNode(8);
    head -> next -> next = new IntNode(50);


    //to traverse the list and print the nodes' info
    for (IntNode* ptr = head; ptr != 0; ptr = ptr ->next)
    {
        cout << ptr -> info << " ";
    }

    
    return 0;
}