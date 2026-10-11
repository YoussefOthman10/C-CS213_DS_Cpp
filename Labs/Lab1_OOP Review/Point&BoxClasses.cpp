#include <iostream>
using namespace std;


class Point
{
private:
    int x, y;
public:
    void print() {
        cout << x << "," << y;
    }
};


// Templates
template <typename T>
class Box
{
    T value;
public:
    Box(T v) : value(v) {}
    T get() {
        return value;
    }
};


int main() {
    Point p1; // An object of class Point


    // Pointers and Dynamic Memory
    int* p = new int(5);  // new allocates on the heap and returns a pointer, delete frees it
    delete p;  // Every new needs exactly one delete
    p = nullptr;  // Avoid dangling


    Box<int> b1(5);
    Box<string> b2("hi");


    return 0;
}