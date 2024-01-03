#pragma once
#include "AbstractStack.h"
#include <vector>

class StaticStack : public AbstractStack {
private:
    std::vector<int> data;
    int capacity;
    int size;

public:
    StaticStack(int capacity = 100);
    StaticStack(const StaticStack& other);
    ~StaticStack() override;

    void push(int value) override;
    void pop() override;
    int top() const override;
    bool isEmpty() const override;
    void clear() override;

    StaticStack& operator=(const AbstractStack& other) override;

    friend std::ostream& operator<<(std::ostream& out, const StaticStack& stack);
    friend std::istream& operator>>(std::istream& in, StaticStack& stack);
};

