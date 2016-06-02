#include "ArrayAlgo.h"
#include <iostream>

// 改进： A[],n 作为ArrayAlgo的数据成员
void printArray(int A[], int n);
void testRemoveDuplicates(ArrayAlgo * solution);
int main()
{
	ArrayAlgo *solution;
	testRemoveDuplicates(solution);
	
	return 0;
}


void printArray(int A[], int n)
{

	for(int i = 0; i < n; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
}

void testRemoveElement(ArrayAlgo *solution)
{
	// remove specific element
    const int n = 6;	
	int A[n] = {1,2,2,3,2,4};
	int elem = 2;
	int j = solution->removeElement(A,n,elem);	
	printArray(A, j);
}

void testRemoveDuplicates(ArrayAlgo *solution)
{
	// remove duplicated element
	const int n = 6;	
	int A[n] = {1,1,1,2,2,3};
	int j = solution->removeDuplicates(A, n);
	printArray(A, j);

}