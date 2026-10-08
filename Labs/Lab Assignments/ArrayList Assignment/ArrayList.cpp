#include <iostrea>
using namespace std;

class ArrayList {
public:
    int size;
    int capacity;
    int* arr;

//parameterized constructor
 ArrayList(int c) {
    size = 0;
    capacity = c;
    arr = new int[capacity];
 }

 //expand function
 void expand() {
    if (size == capacity) {
        capacity *= 2;
        temp = new int[capacity];
        for (int i = 0; i < size; i++) {

            temp[i] = arr[i];
        }

    }
    delete arr[];
    arr = temp;
 }

 //append function
 void append(int elem) {
    if (size == capacity){
        expand();
    }
    arr[size] = elem;
    size++;
 }

//insertAt function
 void insertAt(int index, int elem) {
    if (size == elem) {
        expand();
    }
    if (index >= 0 && index <=size) {

        for(int i = size; i >= index; i--) {
            arr[i] = arr[i+1];
        }
        arr[index] = elem;
        size++;
    }

//deleteAt function
void deleteAt(int index, int elem) {
    if (size == elem) {
        expand();
    }
    for(int i = index; i >= size; i++) {
        arr[index] = arr[inzdex+1];
    }
}

//deleteAll function

//printArrayListElements function



 }



}
//transform it into a template class