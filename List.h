#include "nodo.h"

#pragma once
class List
{
public:
	nodo* start;
	nodo* end;
	int count;

	List();
	void InsertStart(int value);
	void InsertEnd(int value);
	void InsertPosition(int value, int position);
	nodo* ExtractStart();
	nodo* ExtractEnd();
	nodo* ExtractPosition(int position);
	nodo* GetNode(int value);
	int GetValue(int position);
	bool isEmpty();
	~List() {};
};

