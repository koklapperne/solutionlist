// Local headers
#include "objectarrayimplimentation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global list data structure declaration
person persons[10];
// Populate
int ObjectArrayImplementation::populateList() {
	// 21-04-2022 10.36
	// Declarations
	int appAction;
	person newTestperson;
	// Initializations
	appAction = 0;
	// 0
	newTestperson.update("ABE", "Professor", 55);
	persons[0]= newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	persons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	persons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	persons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	persons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	persons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	persons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	persons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	persons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	persons[9] = newTestperson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Person list populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Find
int ObjectArrayImplementation::findElement() {
	// 21-04-2022 08.07
	int appAction;
	std::string activePersonName;
	int i;
	//
	appAction = 0;
	activePersonName = "*";
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Enter person name: ";
	std::cin >> activePersonName;
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		if (activePersonName == persons[i].returnName()) {
			std::cout << "Person found on position: " << i << std::endl;
		}
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Modify
int ObjectArrayImplementation::modifyElement() {
	// 21-04-2022 08.30
	int appAction;
	std::string newName;
	int i;
	//
	appAction = 0;
	newName = "*";
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Enter index: ";
	std::cin >> i;
	std::cout << "Enter new person name ";
	std::cin >> newName;
	appAction = persons[i].updateName(newName);
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Add
int ObjectArrayImplementation::addElement() {
	// 21-04-2022 08.58
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Not possible! Arrays are static in size";
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Delete
int ObjectArrayImplementation::deleteElement() {
	// 21-04-2022 08.30
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Not possible! Arrays are static in size";
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print
int ObjectArrayImplementation::printList() {
	// 21-04-2022 10.45
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		std::cout << i << ": " << persons[i].returnName() << std::endl;
	}
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	//
	return 0;
}
// Options
int ObjectArrayImplementation::showObjectImplementationOptions() {
	// 21-04-2022 06.45
	int appAction = 0;
	std::cout << "1. Popultate list" << std::endl;
	std::cout << "2. Find element" << std::endl;
	std::cout << "3. Modify element" << std::endl;
	std::cout << "4. Add element" << std::endl;
	std::cout << "5. Delete element " << std::endl;
	std::cout << "6. Print list" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}
int ObjectArrayImplementation::handleObjectImplementationOptions() {
	// 21-04-2022 06.45
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Object array implimentation--", "V.00.01");
		appAction = showObjectImplementationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = ObjectArrayImplementation::populateList();
			break;
		case 2:
			appAction = TextUserInterface::writeAppNoOption();
			appAction = findElement();
			break;
		case 3:
			appAction = modifyElement();
			break;
		case 4:
			appAction = addElement();
			break;
		case 5:
			appAction = deleteElement();
			break;
		case 6:
			appAction = printList();
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