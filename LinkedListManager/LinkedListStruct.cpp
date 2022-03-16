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

void AddToList(LinkedListNode*& listHead, int value)
{
	LinkedListNode* newNode = new LinkedListNode();
	LinkedListNode* aux1 = listHead, * aux2;

	newNode->value = value;

	while ((aux1 != NULL) && (aux1->value < value))
	{
		aux2 = aux1;
		aux1 = aux1->next;
	}

	listHead == aux1 ? listHead = newNode : aux2->next = newNode;

	newNode->next = aux1;
}

bool RemoveFromList(LinkedListNode*& listHead, int value)
{
	LinkedListNode* previous = NULL, * auxDelete = listHead;

	// Search
	while ((auxDelete != NULL) && (auxDelete->value != value))
	{
		previous = auxDelete;
		auxDelete = auxDelete->next;
	}

	// Number not found
	if (auxDelete == NULL) return false;

	previous == NULL ? listHead = listHead->next : previous->next = auxDelete->next;

	delete auxDelete;

	return true;
}

void DisplayList(LinkedListNode* listHead)
{
	LinkedListNode* current = new LinkedListNode();

	current = listHead;

	cout << "- Begining -\n";
	while (current != NULL)
	{
		cout << "- " << current->value << endl;
		current = current->next;
	}
	cout << "- End -\n";
}

bool SearchValue(LinkedListNode*& listHead, int value)
{
	LinkedListNode* current = new LinkedListNode();
	current = listHead;

	while ((current != NULL) && (current->value <= value))
	{
		if (current->value == value)
		{
			return true;
		}
		current = current->next;
	}

	return false;
}

bool IsListEmpty(LinkedListNode*& listHead)
{
	return listHead == NULL;
}
