#pragma once

// IDS344-01 - 2022-01 - Grupo #1 - Linked List

// Nikita Kravchenko - 1101607
// Omar N??ez - 1101587
// Oliver Infante - 1100292
// Lervis Pinales - 1096323
// Daniel B?ez - 1073597

struct LinkedListNode;

void AddToList(LinkedListNode*&, int);
bool RemoveFromList(LinkedListNode*&, int);
void DisplayList(LinkedListNode*);
bool SearchValue(LinkedListNode*&, int);
bool IsListEmpty(LinkedListNode*&);
