#include "Node.h"

#pragma once
class List
{
public:
	Node* start;
	Node* end;
	int count;

	List();
	void InsertEnd(int value);
	Node* ExtractEnd();
	int GetValues(int position);
	bool isEmpty();
	~List() {};
};
