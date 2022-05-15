#pragma once
// Local headers
#include "person.h"
// Namespace declaration
namespace ObjectLinkedListImplementation {
	// Node data structure declaration
	class node {
	public:
		person value;
		// Important! Recursive definition! This creates the linking!
		node* next;
	};
	// Function declarations
	// Test data
	int populateTestData();
	int selectPersonFromTestData();
	// Add node to front
	int addNodetoFront(node** head, person newPerson);
	// Add node to end
	int addNodetoEnd(node** head, person newPerson);
	// Demonstrate
	int demonstrateLinkedList();
	// Print
	int printList(node* n);
	// Options
	int showOptions();
	int handleOptions();
}