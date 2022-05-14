#pragma once
// Local headers
#include "person.h"
#include "node.h"
// Standard library headers
#include <string>
// Namespace declaration
namespace ObjectLinkedListImplementation {
	// Function declarations
	// Test data
	int populateTestData();
	int selectPersonFromTestData();
	// Add
	int addElementFront(node** head, person newPerson);
	// Print
	int printList(node* n);
	/*
	// Populate
	int populateList();
	// Find
	int findElement();
	// Modify
	int modifyElement();
	// Add
	int addElementAtFront();
	// Delete
	int deleteElement();
	
	// Options
	*/
	int showOptions();
	int handleOptions();
}