#pragma once
// Standard library headers
#include <string>
// Function declarations
namespace SimplestLinkedListImplementation{
	// Node data structure declaration
	class node {
	public:
		std::string carName;
		// Important! Recursive definition! This creates the list nature!
		node* next;
	};
	// Function declarations
	// Test data
	int populateTestData();
	// Print
	int printList(node* n);
	// Demonstrate 
	int demonstrateLinkedList();
	// Options
	int showOptions();
	int handleOptions();
}