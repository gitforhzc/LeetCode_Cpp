#include "ArrayAlgo.h"
int ArrayAlgo::removeElement(int A[], int n, int elem)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if(A[i] == elem)
		{
			continue;
		}

		A[j] = A[i];
		j++;
	}
	return j;
}

int ArrayAlgo::removeDuplicates(int A[], int n)
{
	if(n == 0)
	{
		return 0;
	}
	
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[j] != A[i])
		{
			A[++j] = A[i];
		}
		
	}
	return j+1;
}
