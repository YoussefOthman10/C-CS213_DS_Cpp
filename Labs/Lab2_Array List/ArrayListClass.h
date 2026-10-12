//ArrayList.h
#include <iostream>
#include <cassert>
using namespace std;


template<class T>
class ArrayList{
    T* arr;
    int numElems;
    int capacity;
public:
    ArrayList();
    ArrayList(int n);
    ~ArrayList();
    void append(T elem);
    void expand();
    void insertAt(int index, T elem);
    void deleteAt(int index);
    void print();
    void clear();
    T& operator[](int index);
    friend ostream& operator<<(ostream& outs, const ArrayList<T>& alist) {
        for (int i = 0; i < alist.numElems; ++i)
            outs << alist.arr[i] << " ";
        return outs;
    }
};