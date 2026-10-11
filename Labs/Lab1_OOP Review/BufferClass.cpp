class Buffer
{
    int* data;
public:
    Buffer(int n) {  // Parameterized Constructor
        data = new int[n];  // Dynamically allocated array of integers
    }

    ~Buffer() {  // Destructor
        delete[] data;
    }
};