/*
#include "LinkedList.h"
#include "Utils.h"
#include "Stack.h"
#include <iostream>
void printStack(Stack* a);
void printArray(int arr[], int size);
int main() 
{
	Stack* a = new Stack;
	int* d = reverse10();;
	printArray(d, 10);
	std::cout << "\nreversed\n";
	reverse(d, 10);
	printArray(d, 10);
	initStack(a);
	push(a, 12);
	push(a, 13);
	push(a, 14);
	pop(a);
	printStack(a);
	cleanStack(a);
	printStack(a);
	initStack(a);
	push(a, 120);
	printStack(a);
	return 0;
}

void printArray(int arr[], int size) 
{
	int i = 0;
	for (i = 0; i < size; i++) 
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void printStack(Stack* a)
{
	int i = 0; 
	for (i = 0; i < a->count; i++)
	{
		std::cout << a->head->num << std:: endl;
		a->head = a->head->next;
	}
}
*/