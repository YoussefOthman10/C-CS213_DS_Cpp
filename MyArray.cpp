#include <iostream>
using namespace std;

class MyArray
{
    int* A;
    int maxSize;
    int ctr;
public:
    MyArray(int maxS)
    {
        A = new int[maxS];
        maxSize = maxS;
        ctr = 0;
    }

    bool add(int item)
    {
        if(ctr == maxSize)
        {
            return false;
        }
        A[ctr++] = item;
        return true;
    }

    void deleteLast()
    {
        if(ctr > 0)
            ctr--;
    }
    void display()
    {
        for (int i=0; i<ctr; i++)
        {
            cout<<A[i]<<" ";
            cout<<endl;
        }
    }
    
    int getElem(int i)
    {
        if(i < ctr)
            return A[i];
        else
            exit(1);
    }

    ~MyArray()
    {
        delete[] A;
    }
};