#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node
{
	unsigned int num;
	Node* next;
};

void addNode(Node ** head, unsigned int num);
void removeNode(Node** head);

#endif