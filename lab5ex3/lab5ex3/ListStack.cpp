#include "ListStack.h"

ListStack::ListStack() : head(nullptr), size(0) {}

ListStack::ListStack(const ListStack& other) : size(other.size) {
    if (other.head == NULL) {
        head = NULL;
        return;
    }

    Node* tempOther = other.head;
    Node* temp = new Node(tempOther->data);
    head = temp;

    tempOther = tempOther->next;
    while (tempOther != nullptr) {
        temp->next = new Node(tempOther->data);
        temp = temp->next;
        tempOther = tempOther->next;
    }
    temp->next = NULL;
}

ListStack::~ListStack() {
    clear();
}

void ListStack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    ++size;
}

void ListStack::pop() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
        --size;
    }
    else {
        std::cerr << "Stack underflow!\n";
    }
}

int ListStack::top() const {
    if (!isEmpty()) {
        return head->data;
    }
    else {
        std::cerr << "Stack is empty!\n";
        return -1; 
    }
}

bool ListStack::isEmpty() const {
    return size == 0;
}

void ListStack::clear() {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    size = 0;
}

ListStack* ListStack::clone() const {
    return new ListStack(*this);
}

ListStack& ListStack::operator=(const AbstractStack& other) {
    const ListStack& ls = dynamic_cast<const ListStack&>(other);
    if (this != &ls) {
        clear();
        Node* tempOther = ls.head;
        Node* temp = new Node(tempOther->data);
        head = temp;

        tempOther = tempOther->next;
        while (tempOther != NULL) {
            temp->next = new Node(tempOther->data);
            temp = temp->next;
            tempOther = tempOther->next;
        }
        temp->next = NULL;

        size = ls.size;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const ListStack& stack) {
    ListStack::Node* temp = stack.head;
    while (temp != NULL) {
        out << temp->data << " ";
        temp = temp->next;
    }
    return out;
}

std::istream& operator>>(std::istream& in, ListStack& stack) {
    int value;
    while (in >> value) {
        stack.push(value);
    }
    return in;
}
