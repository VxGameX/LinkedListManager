#pragma once

// IDS344-01 - 2022-01 - Grupo #1 - Linked List

// Nikita Kravchenko - 1101607
// Omar Núñez - 1101587
// Oliver Infante - 1100292
// Lervis Pinales - 1096323
// Daniel Báez - 1073597

struct LinkedListNode;

void AddToList(LinkedListNode*&, int);
bool RemoveFromList(LinkedListNode*&, int);
int DisplayList(LinkedListNode*);
bool SearchValue(LinkedListNode*&, int);
bool IsListEmpty(LinkedListNode*&);
