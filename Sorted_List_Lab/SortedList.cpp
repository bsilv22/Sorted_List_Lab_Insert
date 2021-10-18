#include "SortedList.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, SortedList& rhs)
{
	for (int i = 0; i < rhs.length; i++)
	{
		os << rhs.arr[i] << endl;
	}

	return os;
}

SortedList::SortedList() 
{
	length = 0;
}

SortedList::~SortedList()
{

}

void SortedList::InsertItem(int item)
{

	if (length == 0) 
	{
		
		arr[0] = item;
		length = 1;
		return;
	}

	//find the insertion place
	int i = 0;
	while ((i<length) && (item > arr[i] ))
	{
		i++;
	}


	//shift all elements
	for (int j = length-1; j >= i; j--)
	{
		arr[j+1] = arr[j];
	}

	//put in new element
	arr[i] = item;
	
	//update length
	length++;

}