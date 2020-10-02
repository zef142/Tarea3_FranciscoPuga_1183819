#include "List.h"

List::List() {
	start = nullptr;
	end = nullptr;
	count == 0;
};

void List::InsertStart(int value) {
	nodo* new_nodo = new nodo();
	new_nodo->value = value;

	if (isEmpty()) {
		start = new_nodo;
		end = new_nodo;
	}
	else {
		new_nodo->next = start;
		start = new_nodo;
	}
	count++;
}

void List::InsertEnd(int value) {
	nodo* new_nodo = new nodo();
	new_nodo->value = value;

	if (isEmpty()) {
		start = new_nodo;
		end = new_nodo;
	}
	else {
		end->next = new_nodo;
		end = new_nodo;
	}
	count++;
}

nodo* List::ExtractEnd() {
	nodo* temp = end;
	if (!isEmpty()) {
		if (count == 1) {
			end = end->next;
			start = end;
		}
		else {
			nodo* pretemp = start;
			temp = pretemp->next;
			while (temp != end) {
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		count--;
	}
	return temp;
}

nodo* List::GetNode(int value) {
	nodo* temp = start;
	while ((temp) && (temp->value != value)) {
		temp = temp->next;
	}
	return temp;
}

int List::GetValue(int position) {
	if ((position >= 0) && (position < count)) {
		nodo* temp = start;
		int index = 0;
		while ((temp) && (index < position)) {
			temp = temp->next;
			index++;
		}
		return temp->value;
	}
	return -1;
}

bool List::isEmpty() {
	return count == 0;
}