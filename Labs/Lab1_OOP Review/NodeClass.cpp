template <typename T>
class Node
{
public:
    T data;
    Node<T>* next;

    Node(T value) {
        data = value;
        next = nullptr;
    }

    
    // Using this to point to the calling object
    Node<T>* getNext() {
        return this->next;
    }
};