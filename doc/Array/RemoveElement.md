## Main point
`in place`  
to create two cursor, one to traverse, other to save appropriate value and follow.		

` remove all instances of value`  
> if(A[i] == elem) then ...

`return new length of array`  
the following cursor is just the new length.

## Syntax keyword
**contiune**  
out of this loop, and step into the next loop.

## Code architecture
all algorithmic implementations, as member function of class ArrayAlgo, is to be called on main function.  
for example:
	
	// directory: ./src/demo
	// array_demo.cpp 
	#include "ArrayAlgo.h"
	int main()
	{
		ArrayAlgo *solution; 
		solution->removeElement(...);
	}

	// directory: ./include
	// ArrayAlgo.h
	class ArrayAlgo
	{
		int removeElement(...);
	};

	// directory: ./src/
	// ArrayAlgo.cpp
	#include "ArrayAlgo.h"
	int ArrayAlgo::removeElement(...)
	{
		// 算法实现
		...
	}
		


