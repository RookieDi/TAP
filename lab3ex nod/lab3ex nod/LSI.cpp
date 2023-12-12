#include "LSI.h"
#include <iostream>

LSI::LSI() : head(nullptr) {}


void  LSI::insertNode(int value) {
	Nod* newNode = new Nod;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void LSI::deleteNode() {
	if (head == nullptr) {
		std::cout << "Empty list";
		return;
	}
	Nod* temp = head;
	head = head->next;
	delete temp;
}

void LSI::displayList() {
	Nod* current = head;
	while (current != nullptr) {
		std::cout << current->data << "";
		current = current->next;
	}
	std::cout << std::endl;
}
