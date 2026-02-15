// Implements a generic circular linked list using templates.
// Tail connects back to head to allow continuous rotation.
// Used for outfit rotation scheduling.

#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node<T>* prev; // optional, not used here but kept consistent

    Node() {
        next = nullptr;
        prev = nullptr;
    }

    Node(T value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

template <typename T>
class CircularLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    Node<T>* current; // useful for rotation features
    int count;

public:
    // Constructor
    CircularLinkedList() {
        head = nullptr;
        tail = nullptr;
        current = nullptr;
        count = 0;
    }

    // Insert at end
    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (head == nullptr) {
            head = tail = newNode;
            newNode->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }

        count++;
    }

    // Display (one full loop)
    void display() {
        if (head == nullptr) return;

        Node<T>* temp = head;

        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)" << endl;
    }

        // Move current pointer (rotation)
    void moveT:

};
