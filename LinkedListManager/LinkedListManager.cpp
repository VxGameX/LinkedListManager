// IDS344-01 - 2022-01 - Grupo #1 - Linked List

// Nikita Kravchenko - 1101607
// Omar Núñez - 1101587
// Oliver Infante - 1100292
// Lervis Pinales - 1096323
// Daniel Báez - 1073597

#include <iostream>

#include "LinkedListManager.h"
#include "LinkedListStruct.h"

#include "GenericFunctions.h"

using namespace std;

LinkedListNode* listHead = NULL;

int main()
{
    cout << "- NOTE:\n";
    cout << "This program uses int data type (only positive numbers) to store given values.\n";
    cout << "This program follows linked listHead general rules.\n\n";

    Pause();
    ClearConsole();

    cout << "Welcome!\n\n";

	do
	{
		DisplayMenu();
	} while (true);
}

void DisplayMenu()
{
    string menuOptionString;
    int menuOption = 0;

    cout << "Select an option. (1 - 5)\n";
    cout << "1. Add\n";
    cout << "2. Remove\n";
    cout << "3. Display\n";
    cout << "4. Search\n";
    cout << "5. Exit\n\n";
    cout << ">> ";

    cin >> menuOptionString;

    menuOption = IsNumber(menuOptionString) ? stoi(menuOptionString) : 0;

    switch (menuOption)
    {
        case 1:
            Add();
            break;
        case 2:
            Remove();
            break;
        case 3:
            Display();
            break;
        case 4:
            Search();
            break;
        case 5:
            ExitProgram();
            break;
        default:
            cout << "Please, enter a valid option. (1 - 5)\n";
            Pause();
            break;
    }

    ClearConsole();
}

void Add()
{
    string valueString;
    int value;

    ClearConsole();

    cout << "Enter a number: \n>> ";
    cin >> valueString;

    while (!IsNumber(valueString))
    {
        cout << "Only positives int values are allowed. (input: " << valueString << ")\n >>";
        cin >> valueString;
    }

    value = stoi(valueString);

    AddToList(listHead, value);
}

void Remove()
{
    string valueString;
    int value;

    ClearConsole();

    if (IsListEmpty(listHead))
    {
        cout << "List is currently empty.\n";
    }
    else
    {
        cout << "Enter the number to remove: \n>> ";
        cin >> valueString;

        ClearConsole();

        while (!IsNumber(valueString))
        {
            cout << "Only positives int values are allowed. (input: " << valueString << ")\n >>";
            cin >> valueString;
        }

        value = stoi(valueString);

        RemoveFromList(listHead, value) ? cout << value << " deleted." : cout << value << " not found.x";
    }

    Pause();
}

void Display()
{
    ClearConsole();

    if (IsListEmpty(listHead))
    {
        cout << "List is currently empty.\n";
    }
    else
    {
        DisplayList(listHead);
    }
    
    Pause();
}

void Search()
{
    string valueString;
    int value;

    ClearConsole();

    if (IsListEmpty(listHead))
    {
        cout << "List is currently empty.\n";
    }
    else
    {
        cout << "Enter the number to search: \n>> ";
        cin >> valueString;

        ClearConsole();

        while (!IsNumber(valueString))
        {
            cout << "Only positives int values are allowed. (input: " << valueString << ")\n >>";
            cin >> valueString;
        }

        value = stoi(valueString);

        SearchValue(listHead, value) ? cout << value << " found." : cout << value << " not found.";
    }

    Pause();
}
