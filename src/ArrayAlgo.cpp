#include "ArrayAlgo.h"
ArrayAlgo::ArrayAlgo(int *ptr_start, int *ptr_end)
{
	n = ptr_end - ptr_start;
	ptr_arr = new int[n];
	int *ptr = ptr_arr;
	while (ptr_start != ptr_end)
	{
		*ptr++ = *ptr_start++;
	}
}

ArrayAlgo::~ArrayAlgo()
{
	if (ptr_arr != nullptr)
	{
		delete [] ptr_arr;
	}
	
}

ArrayAlgo::ArrayAlgo(const ArrayAlgo &arrObject)
{
	n = arrObject.n;
	ptr_arr = new int [arrObject.n];
	
	for (int i = 0; i < n; i++)
	{
		ptr_arr[i] = arrObject.ptr_arr[i];
	}
}


void ArrayAlgo::printArray(int newSize)
{

	for(int i = 0; i < newSize; i++)
	{
		std::cout << ptr_arr[i] << " ";
	}
	std::cout << std::endl;
}

int ArrayAlgo::removeElement(int elem)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if(ptr_arr[i] == elem)
		{
			continue;
		}

		ptr_arr[j] = ptr_arr[i];
		j++;
	}
	return j;
}

int ArrayAlgo::removeDuplicates()
{
	if(n == 0)
	{
		return 0;
	}
	
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		if (ptr_arr[j] != ptr_arr[i])
		{
			ptr_arr[++j] = ptr_arr[i];
		}
		
	}
	return j+1;
}

int ArrayAlgo::removeDuplicatesii()
{
	if (n == 0)
	{
		return 0;
	}
	
	int j = 0;
	int flag = 1;	// 数组中元素出现的次数
	for (int i = 1; i < n; i++)
	{
		
		if (ptr_arr[j] == ptr_arr[i])
		{
			if(flag == 1)
			{
				j++;
			}
			flag++;
		}
		else
		{
			ptr_arr[++j] = ptr_arr[i];
			flag = 1;
		}
	}
	return j+1;
}