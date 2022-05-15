// Local headers
#include "simplestlinkedlistimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <iostream>
// Global test data structure declaration
std::string testCars[10];
// Testdata
int SimplestLinkedListImplementation::populateTestData() {
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
// Populate
int SimplestLinkedListImplementation::demonstrateLinkedList() {
	// 13-05-2022 08.04
	int appAction;
	appAction = 0;
	// Declare nodes
	node* head = new node();
	node* second = new node();
	node* third = new node();
	node* fourth = new node();
	node* fifth = new node();
	// Initialize nodes
	head->carName = testCars[0];
	head->next = second;
	second->carName = testCars[1];
	second->next = third;
	third->carName = testCars[2];
	third->next = fourth;
	fourth->carName = testCars[3];
	fourth->next = fifth;
	fifth->carName = testCars[4];
	fifth->next = nullptr;
	// Print linked list
	printList(head);
	// Clean up memory
	// IMPORTANT! Reverse order deletion!
	delete fifth;
	delete fourth;
	delete third;
	delete second;
	delete head;
	// 
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print
int SimplestLinkedListImplementation::printList(node* n) {
	// 13-05-2022 08.54
	while (n != nullptr) {
		std::cout << n->carName << std::endl;
		n = n->next;
	}
	//
	return 0;
}
// Options
int SimplestLinkedListImplementation::showOptions() {
	// 15-05-2022 08.58
	int appAction = 0;
	std::cout << "1. Populate test data" << std::endl;
	std::cout << "2. Demonstrate linked list" << std::endl;
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
int SimplestLinkedListImplementation::handleOptions() {
	// 15-05-2022 08.46
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Simplest linked List implementation--", "V.00.01");
		appAction = showOptions();
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
			appAction = demonstrateLinkedList();
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