// Implements a generic doubly linked list using templates.
// Allows forward and backward traversal.
// Used for trip history navigation.

#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node<T>* prev; // not used in singly, but kept for compatibility

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
class SinglyLinkedList {
private:
    Node<T>* head;
    int count;

public:
    // Constructor
    SinglyLinkedList() {
        head = nullptr;
        count = 0;
    }

    // Insert at end
    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        count++;
    }

    // Display list
    void display() {
        Node<T>* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Return size
    int size() {
        return count;
    }

    // Remove by value
    void removeByValue(T value) {
        if (head == nullptr) return;

        // If head needs to be removed
        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            count--;
            return;
        }

        Node<T>* current = head;

        while (current->next != nullptr) {
            if (current->next->data == value) {
                Node<T>* temp = current->next;
                current->next = temp->next;
                delete temp;
                count--;
                return;
            }
            current = current->next;
        }
    }

    // Remove last node
    void removeLast() {
        if (head == nullptr) return;

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            count--;
            return;
        }

        Node<T>* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
        count--;
    }

    // Clear entire list
    void clear() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        count = 0;
    }
};
