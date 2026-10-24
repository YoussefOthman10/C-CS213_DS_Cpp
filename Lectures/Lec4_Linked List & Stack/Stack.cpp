// LL-Based Implementation of Stack Class


#include <list>
template<class T>
class LLStack 
{
    list<T> l;
public:
    void clearStack()
    {
        l.clear();
    }
    bool isEmpty()
    {
        return l.empty();
    }
    T& top()
    {
        return l.back();
    }
    T pop()
    {
        T elem = l.back();
        l.pop_back();
        return elem;
    }
    void push(const T& elem)
    {
        l.push_back(elem);
    }
};