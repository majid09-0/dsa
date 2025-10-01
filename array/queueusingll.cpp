#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

template <typename T>
class Queue {
    Node<T>* front;
    Node<T>* rear;
    int size1;

public:
    Queue() {
        front = rear = nullptr;
        size1 = 0;
    }

    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    void push(T data) {
        Node<T>* temp = new Node<T>(data);
        if (rear == nullptr) {
            // Queue is empty
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        size1++;
    }

    void pop() {
        if (front == nullptr) {
            cout << "Queue underflow!" << endl;
            return;
        }

        Node<T>* temp = front;
        front = front->next;

        // If queue becomes empty
        if (front == nullptr)
            rear = nullptr;

        delete temp;
        size1--;
    }

    T Front() const {
        if (front == nullptr)
            throw runtime_error("Queue is empty!");
        return front->data;
    }

    T Back() const {
        if (rear == nullptr)
            throw runtime_error("Queue is empty!");
        return rear->data;
    }

    int size() const {
        return size1;
    }

    bool empty() const {
        return front == nullptr;
    }
};

int main() {
    
    return 0;
}