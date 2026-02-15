// Defines Node class used by all linked list types.

using namespace std;
template <typename T> 

struct Node{
    T data; // declared permanently
    Node<T>* next;
    Node<T>* prev;
    
    Node(){
        next = nullptr;
        prev = nullptr;
    }

    Node(T value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
