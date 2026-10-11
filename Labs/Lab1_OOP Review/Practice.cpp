#include <iostream>
using namespace std;


class DynamicArray {
private:

    int* Arr;
    int size;  // the maximum capacity the dynamically allocated array can reach
    int count; // the counter of the current elements in the array
public:
    // default constructor
    DynamicArray() {
        Arr = new int[0];
        size = 0;
        count = 0;
    }
    // parameterized constructor
    DynamicArray(int s) {
        Arr = new int[s];
        size = s;
        count = 0;
    }
    // copy constructor(deep copy)
    DynamicArray (const DynamicArray &obj) {
        size = obj.size;
        count = obj.count;
        Arr = new int[size];
        for(int i = 0; i < size; i++)
            Arr[i] = obj.Arr[i];
    }

    DynamicArray& operator =(const DynamicArray &obj) {
        
        // check for self-assignment
        if(this == &obj) {
            return *this;
        }
        
        // allocate new memory and copy the data
        int* newArr = new int[obj.size];
        for(int i=0; i < obj.size; i++) {
            newArr[i] = obj.Arr[i];
        }
        
        // release the old memory
        delete[] Arr;
        
        // update the object's members
        Arr = newArr;
        size = obj.size;
        count = obj.count;

        // return the current object
        return *this;
    }

    // a function that adds new element at the end of the array
    void addAtEnd(int elem) {
        if(count > size)
            cout << "Cannot add element, Array is FULL!" << endl;
        
        Arr[count] = elem;
        cout << "Elemnt added successfully!" << endl;
        count++;
    }

    // a function that displays all current array elements
    void display() {
        for(int i = 0; i < count; i++) {
            cout << Arr[i] << " "; 
        }
        cout << endl;
    }

    // a function that trakes an index and returns the element at that index
    int getElem(int index)
    {
        int elem;
        if(index > count && index < 0)
            exit(1);
        for(int i = 0; i < count; i++) {
            if(Arr[i] == index)
                elem = Arr[i];
        }
        return elem;
    }










    // destructor
    ~DynamicArray() {
        delete[] Arr;
    }
};



int main() {


    DynamicArray d1(4);
    d1.addAtEnd(1);
    d1.addAtEnd(3);
    d1.addAtEnd(27);
    d1.addAtEnd(13);
    d1.display();
    d1.getElem(2);
    // d1.getElem(7);  // program will exit
    DynamicArray d2(d1);
    d2.addAtEnd(99);
    d2.display();
    d1.display();  // to prove they're independent (deep copy working correctly)

}