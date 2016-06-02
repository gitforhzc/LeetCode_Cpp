#include "ArrayAlgo.h"
#include <iostream>
using namespace std;
int main()
{
	ArrayAlgo solution;
	int A[] = {1,2,2,3,2,4};
	int n = sizeof(A)/sizeof(int);
	int elem = 2;
	int j = solution.removeElement(A,n,elem);
	for(int i = 0; i < j; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	return 0;
}
