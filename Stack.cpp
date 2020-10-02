#include "Stack.h"

Stack::Stack() {
	internalList = new List();
}

void Stack::Insert(int value) {
	internalList->InsertEnd(value);
}

nodo* Stack::Peek() {
	return internalList->ExtractEnd();
}

bool Stack::isEmpty() {
	return internalList->isEmpty();
}