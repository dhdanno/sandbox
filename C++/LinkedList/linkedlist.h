// linkedlist.h
#include <iostream>
#include "node.h"
class linkedlist
{
	private:
		int _count;
		void inRange(int);
		void travelToIndex(int);

		node *head;
		node *tempPtr;
		node *visitPtr;

	public:
		linkedlist();
		~linkedlist();
		int add(int);
		void removeAt(int);
		int count();
		int getAt(int);
		void clear();
		int operator [] (int); //overload for []
};