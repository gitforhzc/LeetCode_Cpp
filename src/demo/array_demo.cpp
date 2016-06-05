#include "ArrayAlgo.h"

void testRemoveElement();
void testRemoveDuplicates();
void testRemoveDuplicatesii();
int main()
{

	testRemoveDuplicatesii();
	return 0;
}



void testRemoveElement()
{
	// remove specific element
    const int n = 6;	
	int A[n] = {1,2,2,3,2,4};
	int elem = 2;
	ArrayAlgo solution(&A[0], &A[n]);
	int j = solution.removeElement(elem);	
	solution.printArray(j);
}

void testRemoveDuplicates()
{
	// remove duplicated element
	const int n = 6;	
	int A[n] = {1,1,1,2,2,3};
	ArrayAlgo solution(&A[0], &A[n]);
	int j = solution.removeDuplicates();
	solution.printArray(j);

}

void testRemoveDuplicatesii()
{
	const int n = 6;	
	int A[n] = {1,1,1,2,2,3};
	ArrayAlgo solution(&A[0], &A[n]);
	solution.printArray(solution.removeDuplicatesii());
}