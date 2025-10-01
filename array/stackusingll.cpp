#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node *next;

    Node(T data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

template <typename T>
class Stack {
    Node<T>* top;
    int size1;

public:
    Stack() {
        top = nullptr;
        size1 = 0;
    }

    ~Stack() {
        while (top != nullptr) {
            pop();
        }
    }

    void push(T data) {
        Node<T>* temp = new Node<T>(data, top);
        top = temp;
        size1++;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow!" << endl;
            return;
        }
        Node<T>* temp = top;
        top = top->next;
        delete temp;
        size1--;
    }

    int size() const {
        return size1;
    }

    T Top() const {
        if (top == nullptr) {
            throw runtime_error("Stack is empty!");
        }
        return top->data;
    }

    bool empty() const {
        return top == nullptr;
    }
};

int main() {
    Stack<int> st;

    st.push(8);
    st.push(9);
    st.push(1);

    cout << "Top: " << st.Top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();

    cout << "Top: " << st.Top() << endl;
    cout << "Size: " << st.size() << endl;

    return 0;
}