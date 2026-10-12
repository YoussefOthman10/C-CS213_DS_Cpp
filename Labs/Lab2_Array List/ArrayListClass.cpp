//ArrayList.cpp
#include "ArrayListClass.h"


// default constructor
template<class T>
ArrayList<T>::ArrayList() {
    numElems = 0;
    capacity = 10;
    arr = new T[capacity];
}

// parameterized constructor
template<class T>
ArrayList<T>::ArrayList(int n) {
    numElems = 0;
    capacity = n;
    arr = new T[n];
}

// destructor
template<class T>
ArrayList<T>::~ArrayList() {
    delete[] arr;
    arr = NULL;
}

template<class T>
void ArrayList<T>::append(T elem) {
    if(numElems >= capacity) {
        expand();  // adjust the capacity
    }
    arr[numElems] = elem;  // insert at last position
    numElems++;  // increase the list length
}

template<class T>
void ArrayList<T>::expand() {
    capacity *=2;  // double the capacity
    T* newarr = new T[capacity];  // allocate a new array with the new capacity
    for(int i=0; i<numElems; i++) {
        newarr[i] = arr[i];  // copy contents from the old array to the new one
    }
    delete[] arr;  // free the memory of the old array
    arr = newarr;  // make arr point to the new array (newarr)
}

template<class T>
void ArrayList<T>::insertAt(int index, T elem) {
    assert(index <=numElems && index >=0);
    if(numElems >= capacity)
        expand();
    for(int i=numElems; i>index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = elem;
    numElems++;
}

template<class T>
void ArrayList<T>::deleteAt(int index) {
    assert(index <numElems && index>=0);
    for(int i = index+1; i<numElems; i++) {
        arr[i-1] = arr[i];
        numElems--;
    }
}

template<class T>
void ArrayList<T>::print() {
    for(int i=0; i<numElems; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <class T>
void ArrayList<T>::clear() {
    numElems = 0;
}

template<class T>
T& ArrayList<T>::operator[](int index) {
    assert(index >= 0 && index < numElems);
    return arr[index];
}

int main() {
    ArrayList<int> arr;
    arr.append(5);
    arr.append(15);
    arr.append(3);
    cout << arr[0] << endl;
    cout << arr << endl;




    return 0;
}