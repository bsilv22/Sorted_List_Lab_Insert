#include "SortedList.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

int main()
{
	SortedList SL;
	SL.InsertItem(10);
	SL.InsertItem(20);
	SL.InsertItem(30);
	SL.InsertItem(15);

	cout << SL << endl;
}