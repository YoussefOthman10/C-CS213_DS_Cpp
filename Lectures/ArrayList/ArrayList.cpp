#include <cstdlib> //for using the exit function

class ArrayList
{
    int* A; //array
    int maxSize; //maximum capacity
    int ctr; //elements currently in the array
    void expand(); //expands array size
public:
    ArrayList(int =10); //initialize capacity (parameterized constructor)
    void insertAt(int , int); //insert at given index
    void push(int); //add an item at the end
    int getElem(int i); //return element at given index
    int getSize(); //return size
    void remove(int); //remove item at a given index
    ~ArrayList(); //destructor
};

void ArrayList::expand()
{
    maxSize *= 2;
    int* temp = new int[maxSize]; //allocate a bigger array (double size)
    for (int i=0; i<ctr; i++)
    {
        temp[i] = A[i]; //copy elements form old array
    }
    delete[] A; //free allocated old array
    A = temp; //now the pointer of the old array A is pointing to the new array
}

ArrayList::ArrayList(int maxS)
{
    A = new int[maxS];
    maxSize = maxS;
    ctr = 0;
}

void ArrayList::insertAt(int item, int index)
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

void ArrayList::push(int item)
{
    if(ctr == maxSize)
        expand();
    A[ctr++] = item;
}

int ArrayList::getElem(int i)
{
    if(i < ctr)
        return A[i];
    else
        exit(1);
}

ArrayList::~ArrayList()
{
    delete[] A;
}