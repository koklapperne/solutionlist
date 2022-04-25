// Local headers
#include "quearrayimplementation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global integer constant holding the size of the stack
const int max = 10;
// Global integer variable holding the top of the stack
int queTop;
// Global test data structure declaration
person testQuePersons[max];
// Global stack data structure declaration
person personQue[max];
int QueArrayImplementation::populateTestData() {
	// 25-04-2022 18.50
	// Declarations
	int appAction;
	person newTestperson;
	// Initializations
	appAction = 0;
	// 0
	newTestperson.update("ABE", "Professor", 55);
	testQuePersons[0] = newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	testQuePersons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	testQuePersons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	testQuePersons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	testQuePersons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	testQuePersons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	testQuePersons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	testQuePersons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	testQuePersons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	testQuePersons[9] = newTestperson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Test data populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
int QueArrayImplementation::selectPersonFromTestData() {
	// 25-04-2022 18.50
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
		std::cout << i << ": " << testQuePersons[i].returnName() << std::endl;
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
int QueArrayImplementation::initializeStack() {
	// 25-04-2022 18.50
	queTop = max;
	//
	return 0;
}
// Push
int QueArrayImplementation::pushElement() {
	// 25-04-2022 18.50
	// Declarations
	int appAction;
	int selectedIndex;
	// Initializations
	appAction = 0;
	selectedIndex = 99;
	person selectedPerson;
	// Select test person
	selectedIndex = selectPersonFromTestData();
	selectedPerson = testQuePersons[selectedIndex];
	// Push test person on to the stack
	if (queTop < 0) {
		std::cout << "Stack overflow!" << std::endl;
	}
	else {
		queTop--;
		personQue[queTop] = selectedPerson;
		std::cout << "Top: " << queTop << std::endl;
		std::cout << selectedPerson.returnName() << " pushed to the stack" << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Pop
int QueArrayImplementation::popElement() {
	// 25-04-2022 18.50
	int appAction;
	//
	appAction = 0;
	person topPerson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (queTop > max - 1) {
		std::cout << "Stack underflow!" << std::endl;
	}
	else {
		std::cout << "Top: " << queTop << std::endl;
		std::cout << personQue[queTop].returnName() << " popped from the stack" << std::endl;
		personQue[queTop] = topPerson;
		queTop++;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print top element
int QueArrayImplementation::peek() {
	// 25-04-2022 18.50
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (queTop >= max) {
		std::cout << "Stack is empty" << std::endl;
	}
	else {
		std::cout << "Top: " << queTop << std::endl;
		std::cout << personQue[queTop].returnName() << std::endl;
	}
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print all elements
int QueArrayImplementation::printStack() {
	// 25-04-2022 18.50
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		std::cout << i << ": " << personQue[i].returnName() << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int QueArrayImplementation::showQueImplementationOptions() {
	// 25-04-2022 18.50
	int appAction = 0;
	std::cout << "1. Popultate test data" << std::endl;
	std::cout << "2. Push an element to the que" << std::endl;
	std::cout << "3. Pop an element from the que" << std::endl;
	std::cout << "4. Print the bottom of the que " << std::endl;
	std::cout << "5. Print que" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}
int QueArrayImplementation::handleQueImplementationOptions() {
	// 25-04-2022 18.50
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Initialize the stack
	appAction = initializeStack();
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Que array implimentation--", "V.00.01");
		appAction = showQueImplementationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = populateTestData();
			break;
		case 2:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = pushElement();
			break;
		case 3:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = popElement();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = peek();
			break;
		case 5:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = printStack();
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