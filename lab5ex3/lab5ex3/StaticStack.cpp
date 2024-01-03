#include "StaticStack.h"

StaticStack::StaticStack(int capacity) : capacity(capacity), size(0) {
    data.resize(capacity);
}

StaticStack::StaticStack(const StaticStack& other) : capacity(other.capacity), size(other.size) {
    data = other.data;
}

StaticStack::~StaticStack() {}

void StaticStack::push(int value) {
    if (size < capacity) {
        data[size++] = value;
    }
    else {
        std::cout << "Stack overflow!\n";
    }
}

void StaticStack::pop() {
    if (!isEmpty()) {
        --size;
    }
    else {
        std::cout << "Stack underflow!\n";
    }
}

int StaticStack::top() const {
    if (!isEmpty()) {
        return data[size - 1];
    }
    else {
        std::cout << "Stack is empty!\n";
        return -1; 
    }
}

bool StaticStack::isEmpty() const {
    return size == 0;
}

void StaticStack::clear() {
    size = 0;
}



StaticStack& StaticStack::operator=(const AbstractStack& other) {
    const StaticStack& ss = reinterpret_cast<const StaticStack&>(other);
    if (this != &ss) {
        data = ss.data;
        capacity = ss.capacity;
        size = ss.size;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const StaticStack& stack) {
    for (size_t i = 0; i < stack.size; ++i) {
        out << stack.data[i] << " ";
    }
    return out;
}

std::istream& operator>>(std::istream& in, StaticStack& stack) {
    int value;
    while (in >> value) {
        stack.push(value);
    }
    return in;
}

