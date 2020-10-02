#include "Stack.h"

Stack::Stack() {
	internalList = new List();
}

void Stack::Insert(int value) {
	internalList->InsertEnd(value);
}

Node* Stack::Peek() {
	return internalList->ExtractEnd();
}

bool Stack::isEmpty() {
	return internalList->isEmpty();
}