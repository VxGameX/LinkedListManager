// IDS344-01 - 2022-01 - Grupo #1 - Linked List

// Nikita Kravchenko - 1101607
// Omar Núñez - 1101587
// Oliver Infante - 1100292
// Lervis Pinales - 1096323
// Daniel Báez - 1073597

#include <iostream>

using namespace std;

struct LinkedListNode
{
	int value;
	LinkedListNode* next;
};

void AddToList(LinkedListNode*& list, int value)
{
	LinkedListNode* newNode = new LinkedListNode();
	LinkedListNode* aux1 = list, * aux2;

	newNode->value = value;

	while ((aux1 != NULL) && (aux1->value < value))
	{
		aux2 = aux1;
		aux1 = aux1->next;
	}

	list == aux1 ? list = newNode : aux2->next = newNode;

	newNode->next = aux1;
}

bool RemoveFromList(LinkedListNode*& list, int value)
{
	LinkedListNode* previous = NULL, * auxDelete = list;

	// Search
	while ((auxDelete != NULL) && (auxDelete->value != value))
	{
		previous = auxDelete;
		auxDelete = auxDelete->next;
	}

	// Number not found
	if (auxDelete == NULL) return false;

	previous == NULL ? list = list->next : previous->next = auxDelete->next;

	return true;
}

int DisplayList(LinkedListNode* list)
{
	return list != NULL ? DisplayList(list->next) : ;
}

bool SearchValue(LinkedListNode*& list, int value)
{
	return true;
}

bool IsListEmpty(LinkedListNode*& list)
{
	return list == NULL;
}
