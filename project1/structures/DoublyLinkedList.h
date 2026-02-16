// Implements a generic doubly linked list using templates.
// Allows forward and backward traversal.
// Used for trip history navigation.

#include <iostream>
using namespace std;

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int count;

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    // Insert at end
    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        count++;
    }

    // Display forward
    void displayForward() {
        Node<T>* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display backward
    void displayBackward() {
        Node<T>* temp = tail;

        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // Remove last node
    void removeLast() {
        if (tail == nullptr) return;

        Node<T>* temp = tail;
        tail = tail->prev;

        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
        count--;
    }

    // Check if empty
    bool isEmpty() const {
        return count == 0;
    }

    // Get size
    int size() const {
        return count;
    }

    // Clear entire list
    void clear() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        count = 0;
    }
};