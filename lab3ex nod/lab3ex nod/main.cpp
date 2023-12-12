#include "LSI.h"
#include <iostream>

int main() {
	LSI lista;

	lista.insertNode(10);
	std::cout <<std::endl;
	lista.insertNode(30);
	std::cout << std::endl;
	lista.insertNode(50);
	std::cout << std::endl;
	lista.displayList();
	std::cout << std::endl;
	lista.deleteNode();

	std::cout << "Lista dupa stergerea primului nod: ";
	lista.displayList();

	return 0;

}