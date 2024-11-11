#include "Utils.h"
#include "Stack.h"
#include <iostream>

#define SIZE_ARR 10
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	
}

int* reverse10()
{
	int i = 0, *arr = new int [SIZE_ARR];
	for (i = 0; i < SIZE_ARR; i++)
	{
		std::cout << "Enter an integer: ";
		std::cin >> arr[i];
	}
	reverse(arr, SIZE_ARR);
	return arr;
}