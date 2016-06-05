## Main point
`in place`  
to create two cursor, one to traverse, other to save appropriate value and follow.

`remove the duplicates`
> if(A[j] != A[i]) then ...

`return new length of array`  
the following cursor is just the new length + 1.

## Code architecture
 all algorithmic implementations, as member function of class ArrayAlgo, is to be called on main function. [see details][1].   

 array including elements and size, as member data of class ArrayAlgo, is to be structured on main function.  
 for example:
	
	// ArrayAlgo.h
	class ArrayAlgo{
	private:
		int *ptr_arr;
		int n;
	public:
		ArrayAlgo(int *ptr_start, int *ptr_end);
		~ArrayAlgo();
		ArrayAlgo(const ArrayAlgo &arrObject);
		...
	};

	// array_demo.cpp
	int main()
	{

		const int n = 6;	
		int A[n] = {1,1,1,2,2,3};
		ArrayAlgo solution(&A[0], &A[n]);
		int j = solution.removeElement(elem);	
		solution.printArray(j);
		return 0;
	}

[1]: https://github.com/gitforhzc/LeetCode_Cpp/blob/master/doc/Array/RemoveElement.md