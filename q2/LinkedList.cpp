#include "LinkedList.h"
#include <iostream>
void addNode(Node** head,unsigned int num)
{
	Node* newNode = new Node, *p = NULL;
	newNode->num = num;
	// if it is the first node
	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		p = *head;
		// find last node
		while (p->next)
		{
			p = p->next;
		}
		p->next = newNode;
		newNode->next = NULL;
	}
}


void removeNode(Node** head)
{
	Node* temp = *head;
	if (*head == NULL)
	{
		//if list is empty
	}
	else if ((*head)->next == NULL)
	{
		delete(*head);
		*head = NULL;
	}
	else
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete(temp->next);
		temp->next = NULL;
	}
}


