// Local headers
#include "simplestlinkedlistimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global test data structure declaration
std::string testCars[10];
// Global node data structure
class simpleNode {
	std::string carName;
	// Important! Recursive definition! This creates the list nature!
	simpleNode* next;
};
// Testdata
int SimplestLinkedListImplementation::populateTestCars() {
	// 21-04-2022 07.35
	int appAction;
	appAction = 0;
	//
	testCars[0] = "Ford";
	testCars[1] = "Trabant";
	testCars[2] = "Suzuky Jinny";
	testCars[3] = "Land Rover";
	testCars[4] = "Volks Wagen Caddy";
	testCars[5] = "Mustang";
	testCars[6] = "Volvo";
	testCars[7] = "Farrari";
	testCars[8] = "Nissan";
	testCars[9] = "Skoda";
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Testdata populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int SimplestLinkedListImplementation::showSimplestLinkedListImplementationOptions() {
	// 28-04-2022 15.00
	int appAction = 0;
	std::cout << "1. Populate test data" << std::endl;
	std::cout << "2. #" << std::endl;
	std::cout << "3. #" << std::endl;
	std::cout << "4. #" << std::endl;
	std::cout << "5. #" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}
int SimplestLinkedListImplementation::handleSimplestLinkedListImplementationOptions() {
	// 28-04-2022 15.00
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Simplest linked List implementation--", "V.00.01");
		appAction = showSimplestLinkedListImplementationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = SimplestLinkedListImplementation::populateTestCars();
			break;
		case 2:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 3:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 5:
			appAction = TextUserInterface::writeAppNoOption();
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