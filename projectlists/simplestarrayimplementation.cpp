// Local headers
#include "simplestarrayimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global list data structure declaration
std::string cars[10];
// Populate
int SimplestArrayImplimentation::initializeList() {
	// 21-04-2022 07.35
	int appAction;
	appAction = 0;
	//
	cars[0] = "*";
	cars[1] = "*";
	cars[2] = "*";
	cars[3] = "*";
	cars[4] = "*";
	cars[5] = "*";
	cars[6] = "*";
	cars[7] = "*";
	cars[8] = "*";
	cars[9] = "*";
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "List initialized" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
int SimplestArrayImplimentation::populateList(){
	// 21-04-2022 07.35
	int appAction;
	appAction = 0;
	//
	cars[0] = "Ford";
	cars[1] = "Trabant";
	cars[2] = "Suzuky Jinny";
	cars[3] = "Land Rover";
	cars[4] = "Volks Wagen Caddy";
	cars[5] = "Mustang";
	cars[6] = "Volvo";
	cars[7] = "Farrari";
	cars[8] = "Nissan";
	cars[9] = "Skoda";
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Car list populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Find
int SimplestArrayImplimentation::findElement() {
	// 21-04-2022 08.07
	int appAction;
	std::string activeCar;
	int i;
	//
	appAction = 0;
	activeCar = "*";
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Enter car: ";
	std::cin >> activeCar;
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		if (activeCar == cars[i]) {
			std::cout << "Car found on position: " << i << std::endl;
		}
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Modify
int SimplestArrayImplimentation::modifyElement() {
	// 21-04-2022 08.30
	int appAction;
	std::string newCar;
	int i;
	//
	appAction = 0;
	newCar = "*";
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Enter index: ";
	std::cin >> i;
	std::cout << "Enter car: ";
	std::cin >> newCar;
	cars[i] = newCar;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Add 
int SimplestArrayImplimentation::addElement() {
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
int SimplestArrayImplimentation::deleteElement() {
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
int SimplestArrayImplimentation::printList(){
	// 21-04-2022 08.46
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < 10; i++) {
		std::cout << i << ": " << cars[i] << std::endl;
	}
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int SimplestArrayImplimentation::showSimplestArrayImplimentationOptions() {
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
int SimplestArrayImplimentation::handleSimplestArrayImplimentationOptions() {
	// 21-04-2022 06.45
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Simplest array implimentation--", "V.00.01");
		appAction = showSimplestArrayImplimentationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = populateList();
			break;
		case 2:
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