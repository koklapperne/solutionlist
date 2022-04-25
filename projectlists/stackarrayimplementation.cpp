// Local headers
#include "stackarrayimplementation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global integer constant holding the size of the stack
const int max = 10;
// Global integer variable holding the top of the stack
int top;
// Global test data structure declaration
person testPersons[max];
// Global stack data structure declaration
person personStack[max];
// Populate test data
int StackArrayImplementation::populateTestData() {
	// 25-04-2022 07.09
	// Declarations
	int appAction;
	person newTestperson;
	// Initializations
	appAction = 0;
	// 0
	newTestperson.update("ABE", "Professor", 55);
	testPersons[0] = newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	testPersons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	testPersons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	testPersons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	testPersons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	testPersons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	testPersons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	testPersons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	testPersons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	testPersons[9] = newTestperson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Test data populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
int StackArrayImplementation::selectPersonFromTestData() {
	// 21-04-2022 10.45
	int appAction;
	int i;
	int selection;
	//
	selection = 99;
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		std::cout << i << ": " << testPersons[i].returnName() << std::endl;
	}
	//
	std::cout << "Enter selection: ";
	std::cin >> selection;
	/*
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	*/
	return selection;
}
// Initialize
int StackArrayImplementation::initializeStack() {
	// 25-04-2022 08.12
	top = max;
	//
	return 0;
}
// Push
int StackArrayImplementation::pushElement() {
	// 25-04-2022 11.00
	// Declarations
	int appAction;
	int selectedIndex;
	// Initializations
	appAction = 0;
	selectedIndex = 99;
	person selectedPerson;
	// Select test person
	selectedIndex = selectPersonFromTestData();
	selectedPerson = testPersons[selectedIndex];
	// Push test person on to the stack
	if (top < 0) {
		std::cout << "Stack overflow!" << std::endl;
	}
	else {
		top--;
		personStack[top] = selectedPerson;
		std::cout << "Top: " << top << std::endl;
		std::cout << selectedPerson.returnName() << " pushed to the stack" << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Pop
int StackArrayImplementation::popElement() {
	// 25-04-2022 10.09
	int appAction;
	//
	appAction = 0;
	person topPerson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (top > max-1) {
		std::cout << "Stack underflow!" << std::endl;
	}
	else {
		std::cout << "Top: " << top << std::endl;
		std::cout << personStack[top].returnName() << " popped from the stack" << std::endl;
		personStack[top] = topPerson;
		top++;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print top element
int StackArrayImplementation::peek() {
	// 25-04-2022 10.27
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (top >= max) {
		std::cout << "Stack is empty" << std::endl;
	}
	else {
		std::cout << "Top: " << top << std::endl;
		std::cout << personStack[top].returnName() << std::endl;
	}
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print all elements
int StackArrayImplementation::printStack() {
	// 25-04-2022 08.52
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		std::cout << i << ": " << personStack[i].returnName() << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int StackArrayImplementation::showStackImplementationOptions() {
	// 21-04-2022 19.30
	int appAction = 0;
	std::cout << "1. Popultate test data" << std::endl;
	std::cout << "2. Push an element to the stack" << std::endl;
	std::cout << "3. Pop an element from the stack" << std::endl;
	std::cout << "4. Print the top of the stack " << std::endl;
	std::cout << "5. Print stack" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}
int StackArrayImplementation::handleStackImplementationOptions() {
	// 25-04-2022 07.55
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Initialize the stack
	appAction = initializeStack();
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Stack array implimentation--", "V.00.01");
		appAction = showStackImplementationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = populateTestData();
			break;
		case 2:
			appAction = pushElement();
			break;
		case 3:
			appAction = popElement();
			break;
		case 4:
			appAction = peek();
			break;
		case 5:
			appAction = printStack();
			break;
		case 6:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 7:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 8:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 9:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 0:
			stop = true;
			break;
		default:
			stop = true;
			break;
		}
	}
	//
	return 0;
}