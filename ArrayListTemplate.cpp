#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
class ArrayList
{
    T* A; //array
    int maxSize; //maximum capacity
    int ctr; //elements currently in the array
    void expand(); //expands array size
public:
    ArrayList(int =10); //initialize capacity (parameterized constructor)
    void insertAt(T , int); //insert at given index
    void push(T); //add an item at the end
    T getElem(int i); //return element at given index
    int getSize(); //return size
    void remove(int); //remove item at a given index
    void display(); //displays the elements of the ArrayList
    ~ArrayList(); //destructor
};

template <class T>
void ArrayList<T>::expand()
{
    maxSize *= 2;
    T* temp = new T[maxSize]; //allocate a bigger array (double size)
    for (int i=0; i<ctr; i++)
    {
        temp[i] = A[i]; //copy elements form old array
    }
    delete[] A; //free allocated old array
    A = temp; //now the pointer of the old array A is pointing to the new array
}

template <class T>
ArrayList<T>::ArrayList(int maxS)
{
    A = new T[maxS];
    maxSize = maxS;
    ctr = 0;
}

template <class T>
void ArrayList<T>::insertAt(T item, int index)
{
    if(index > ctr)
        return;
    if (ctr == maxSize)
        expand();
    for(int i=ctr-1; i >= index; i--)
        A[i+1] = A[i];
    A[index] = item;
    ctr++;
}

template <class T>
void ArrayList<T>::push(T item)
{
    if(ctr == maxSize)
        expand();
    A[ctr++] = item;
}

template <class T>
void ArrayList<T>::remove(int index)
{
    if(index > ctr)
        return;
    for(int i = ctr-1; i > index; i--)
        A[i-1] = A[i];
    ctr--;
}

template <class T>
int ArrayList<T>::getSize()
{
    return ctr;
}

template <class T>
T ArrayList<T>::getElem(int i)
{
    if(i < ctr)
        return A[i];
    else
        exit(1);
}

template <class T>
void ArrayList<T>::display()
{
    for(int i=0; i<ctr; i++)
        cout<<A[i]<<" "<<endl;
}


template <class T>
ArrayList<T>::~ArrayList()
{
    delete[] A;
}

int main(){
    ArrayList<int> A1(50);
    for(int i=0; i<=100; i++)
    {
        A1.push(i);
    }
    A1.display();
    cout<<A1.getSize()<<endl;
    A1.insertAt(666,1);
    A1.display();
    cout<<A1.getElem(1)<<endl;
    A1.remove(1);
    A1.display();
    cout<<A1.getSize()<<endl;
}