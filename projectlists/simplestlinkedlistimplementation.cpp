// Local headers
#include "simplestlinkedlistimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global node data structure
class simpleNode {
	std::string carName;
	// Important! Recursive definition!
	simpleNode* next;
};
// Options
int SimplestLinkedListImplementation::showSimplestLinkedListImplementationOptions() {
	// 28-04-2022 15.00
	int appAction = 0;
	std::cout << "1. #" << std::endl;
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
			appAction = TextUserInterface::writeAppNoOption();
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