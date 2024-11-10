#include "Utils.h"
#include <iostream>

#define SIZE_ARR 10
void reverse(int* nums, unsigned int size)
{
	int i = 0,temp = 0;
	for (i = 0; i < size / 2; i++)
	{
		temp = nums[i];
		nums[i] = nums[size - i-1];
		nums[size - 1-i] = temp;
	}


}

int* reverse10()
{
	int i = 0, *arr = new int [SIZE_ARR];
	for (i = SIZE_ARR - 1; i >= 0; i--)
	{
		std::cout << "Enter an integer: ";
		std::cin >> arr[i];
	}
	return arr;
}