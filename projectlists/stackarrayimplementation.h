#pragma once
// Local headers
//
// Namespace decalaration
namespace StackArrayImplementation {
	// Populate test data
	int populateTestData();
	// Select test person
	int selectPersonFromTestData();
	// Initialize
	int initializeStack();
	// Is empty
	bool stackIsEmpty();
	// Push
	int pushElement();
	// Pop
	int popElement();
	// Peek
	int peek();
	// Print all elements
	int printArray();
	// Options
	int showStackImplementationOptions();
	int handleStackImplementationOptions();
}
