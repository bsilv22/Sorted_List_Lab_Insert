#pragma once
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#define MAX_ITEMS 100

class SortedList
{
public:
	SortedList();
	~SortedList();
	void InsertItem(int item);

	friend ostream& operator<<(ostream& os, SortedList& rhs);

private:
	int length = 0;
	int arr[MAX_ITEMS];
};