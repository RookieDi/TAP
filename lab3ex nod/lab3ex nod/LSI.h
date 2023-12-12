#pragma once
#include "Nod.h"
class LSI
{
private:
	Nod* head;

public:
	LSI();
	void insertNode(int value);
	void deleteNode();
	void displayList();
};

