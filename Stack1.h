#include "List.h"
#pragma once
class Stack1
{
private: List* internalList;
public:
	Stack1();
	nodo* Peek();
	void Insert(int value);
	bool isEmpty();
};

