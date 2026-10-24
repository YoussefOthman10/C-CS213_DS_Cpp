#include <iostream>
#include <list>
using namespace std;

// Search in Singly Linked List (SLL)
// O(n)
/* 
bool search(int value) {
    IntNode* ptr = head;
    while(ptr != 0 && ptr->info != value)
        ptr = ptr -> next;
    return ptr != 0;
}
*/


// STL Support for Linked Lists
int main() {
    list<int> li(1,1);
    list<int> li2(0);
    list<int>::iterator it = li.end();
    list<int>:: reverse_iterator rit;

    li.insert(it,2);
    li.push_back(3);
    li.push_back(4);
    li.insert(it,5);
    li.insert(it,6);

    cout <<"\n\nList Processed with Iterator: ";
    for (it = li.begin(); it != li.end(); it++)
        cout << *it << " ";
    cout << "\nList Size: " << li.size();
    cout << (li.empty() ? " Empty" : " Not Empty");

    li2 = li;
    li2.reverse();
    li2.remove(4);
    cout << " \n\nList 2 Reverse of List 1: ";
    for(it = li2.begin(); it != li2.end(); it++)
        cout << *it << " ";
    system ("pause");

    return 0;
}