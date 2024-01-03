#pragma once
#include <iostream>

class AbstractStack {
public:
    virtual ~AbstractStack() {}

    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual int top() const = 0;
    virtual bool isEmpty() const = 0;
    virtual void clear() = 0;

    virtual AbstractStack* clone() const = 0;
    virtual AbstractStack& operator=(const AbstractStack& other) = 0;
};
