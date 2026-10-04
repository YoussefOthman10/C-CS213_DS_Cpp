// A simple demonstration of STL algotithmns
#include <iostream>
#include <vector> // Required for the vector type
#include <algorithm> // Required for STL algortihms
#include <random> // Required for random shuffling
#include <string>
using namespace std;




void low(char &c)
{
    c = tolower(c);
}


int main()
{
    int count; //Loop counter

    //Define a vector object.
    vector<int> vect;

    // Use push_back to push values into the vector.
    for(count = 0; count < 10; count++)
        vect.push_back(count);

    // Display the vector's elements.
    cout << "The vector has " << vect.size() << " elements. Here they are:\n";
    for(count = 0; count < vect.size(); count++)
        cout << vect[count] << " ";
    cout <<endl;

    // Randomly shuffle the vector's contents.
    // Obtain a random seed from the hardware
    random_device rd;

    // Initialize a standard random number engine
    mt19937 g(rd());

    // Shuffle the vector using its beginning and end iterators
    shuffle(vect.begin(), vect.end(), g);

    // Display the vector's elements.
    cout << "The elements have been shuffled: \n";
    for(count = 0; count < vect.size(); count++)
        cout << vect[count] << " ";
    cout <<endl;

    // Now sort the vector's elements.
    sort( vect.begin(), vect.end());

    // Display the vector's elements again.
    cout << "The elements have been sorted: \n";
    for(count = 0; count < vect.size(); count++)
        cout << vect[count] << " ";
    cout <<endl;

    // Now search for an element with the value 7.
    if(binary_search(vect.begin(), vect.end(), 7))
        cout << "The value 7 was found in the vector. \n";
    else
        cout << "The value 7 was not found in the vector. \n";\
    

    /*
    vector<int> coll(6);
    for (int i=0; i<6; ++i)
    {
        coll[i] = i+1;
    }

    // this code works with all collection classes
    vector<int>::iterator it = coll.begin();
    while(it != coll.end())
    {
        cout << *it << ' ';
        ++it;
    }
    */


    // Sorting vector container
    vector<double> coll;
    for(int i =0; i<60; ++i)
        coll.push_back(rand());
    sort(coll.begin(), coll.end());
    vector<double>::iterator it = coll.begin();
    while(it != coll.end())
    {
        cout << *it << ' ';
        it++;
    }
    cout << endl;


    //Converting a string in vector to lowercase
    string tmp = "HELLO, YOUSSEF IS TRYING TO CONVERT TO LOWERCASE.";
    for_each(tmp.begin(), tmp.end(), low);
    cout << tmp;

    
    return 0;
}