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
	int populateTestCars();
	// Print
	int printLinkedList(node* n);
	// Populate 
	int populateLinkedList();
	// Options
	int showSimplestLinkedListImplementationOptions();
	int handleSimplestLinkedListImplementationOptions();
}