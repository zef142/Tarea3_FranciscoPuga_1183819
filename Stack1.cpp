#include "Stack1.h"

Stack1::Stack1() {
	internalList = new List();
}

void Stack1::Insert(int value) {
	internalList->InsertEnd(value);
}

nodo* Stack1::Peek() {
	return internalList->ExtractEnd();
}

bool Stack1::isEmpty() {
	return internalList->isEmpty();
}