#include "List.h"
#pragma once
class Stack
{
private: List* internalList;
public:
	Stack();
	nodo* Peek();
	void Insert(int value);
	bool isEmpty();
};

