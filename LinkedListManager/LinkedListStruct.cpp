// IDS344-01 - 2022-01 - Grupo #1 - Linked List

// Nikita Kravchenko - 1101607
// Omar N��ez - 1101587
// Oliver Infante - 1100292
// Lervis Pinales - 1096323
// Daniel B�ez - 1073597

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

	delete auxDelete;

	return true;
}

void DisplayList(LinkedListNode* list)
{
	LinkedListNode* current = new LinkedListNode();

	current = list;

	cout << "- Begining -\n";
	while (current != NULL)
	{
		cout << "- " << current->value << endl;
		current = current->next;
	}
	cout << "- End -\n";
}

bool SearchValue(LinkedListNode*& list, int value)
{
	LinkedListNode* current = new LinkedListNode();
	current = list;

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

bool IsListEmpty(LinkedListNode*& list)
{
	return list == NULL;
}
