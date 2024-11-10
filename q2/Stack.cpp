#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	addNode(&s->head, element);
	s->count++;
}
int pop(Stack* s)
{
	int i = 0, value = -1;
	Node* p = s->head;
	if (s->count != 0)
	{
		for (i = 0; i < s->count - 1; i++)
		{
			p = p->next;
		}
		value = p->num;
		removeNode(&s->head);
		s->count--;
	}
	return value;
}

void initStack(Stack* s)
{
	(s)->count = 0;
	(s)->head = NULL;
}

void cleanStack(Stack* s)
{
	Node* p = NULL;
	int i = 0;
	while (s->head != NULL)
	{
		p = s->head;
		s->head = s->head->next;
		delete(p);
	}
	s->count = 0;
	
}


bool isEmpty(Stack* s)
{
	return s->count == 0;
}