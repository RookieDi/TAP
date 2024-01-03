#pragma once

#include "AbstractStack.h"

class ListStack : public AbstractStack {
private:
    class Node {
    public:
        int data;
        Node* next;

        Node(int value) : data(value), next(NULL) {}
    };

    Node* head;
    int size;

public:
    ListStack();
    ListStack(const ListStack& other);
    ~ListStack() override;

    void push(int value) override;
    void pop() override;
    int top() const override;
    bool isEmpty() const override;
    void clear() override;

    ListStack* clone() const override;
    ListStack& operator=(const AbstractStack& other) override;

    friend std::ostream& operator<<(std::ostream& out, const ListStack& stack);
    friend std::istream& operator>>(std::istream& in, ListStack& stack);
};

