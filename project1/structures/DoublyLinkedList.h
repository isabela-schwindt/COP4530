// Implements a generic doubly linked list using templates.
// Allows forward and backward traversal.
// Used for trip history navigation.

#include <iostream>
using namespace std;

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
#include "Node.h"
using namespace std;

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int count;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), count(0) {}

    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode; //link current tail to new node
            newNode->prev = tail; //set previous pointer
            tail = newNode; //update tail
        }
        count++; //increase size
    }

    //prints elements head to tail
    void displayForward() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    //prints elements tail to head
    void displayBackward() const {
        Node<T>* temp = tail;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    void removeLast() {
        if (tail == nullptr) return;

        Node<T>* temp = tail;
        tail = tail->prev;

        //if list is not empty after removal 
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
        count--;
    }

    //return true if the list has no elements 
    bool isEmpty() const {
        return count == 0;
    }

    //return number of elements in the list 
    int size() const {
        return count;
    }

    //delets all nodes in the list 
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

#endif