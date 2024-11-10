#include <iostream>
#include "Queue.h"


void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->size = size;
	q->count = 0;
}
void cleanQueue(Queue* q)
{
	delete(q->arr);
}
void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;
	if (q->count != q->size)
	{
		for (i = q->count; i > 0; i--)
		{
			q->arr[i] = q->arr[i - 1];
		}
		q->count++;
		q->arr[0] = newValue;
	}

}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int value = -1;
	if (q->count > 0)
	{
		value = q->arr[q->count - 1];
		q->arr[q->count - 1] = 0;
		q->count--;
	}
	return value;
}
bool isEmpty(Queue* s)
{
	return !(s->count);
}
bool isFull(Queue* s)
{
	return s->size == s->count;
}