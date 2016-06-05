#include <iostream>

#ifndef _ARRAYALGO_H_
#define _ARRAYALGO_H_
class ArrayAlgo{
private:
	int *ptr_arr;
	int n;
public: 
	ArrayAlgo(int *ptr_start, int *ptr_end);
	~ArrayAlgo();
	ArrayAlgo(const ArrayAlgo &arrObject);
	
	void printArray(int newSize);
	int removeElement(int elem);
	int removeDuplicates();
	int removeDuplicatesii();

};


#endif