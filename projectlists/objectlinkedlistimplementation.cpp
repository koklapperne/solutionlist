// Local headers
#include "objectlinkedlistimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <iostream>
#include <string>
// Global test data structure declaration
person testPersons[10];
// Test data
int ObjectLinkedListImplementation::populateTestData() {
	// 14-05-2022 08.31
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
int ObjectLinkedListImplementation::selectPersonFromTestData() {
	// 14-05-2022 08.33
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
// Add node to front
int ObjectLinkedListImplementation::addNodetoFront(node** head, person newPerson) {
	// 15-05-2022 09.15
	// IMPORTANT! Node declaration is recursive!
	// IMPORTANT! Nodes are located randomly in heap memory
	// IMPORTANT! To update the head node the address of the head pointer is needed, resulting in a pointer to a pointer 
	// Prepare new node
	node* newNode = new node();
	newNode->value = newPerson;
	// Update next of the new node with the old head pointer
	newNode->next = *head;
	// Update head pointer of the list with the new node 
	*head = newNode;
	//
	return 0;
}
// Add node to end
int ObjectLinkedListImplementation::addNodetoEnd(node** head, person newPerson) {
	// 15-05-2022 10.16
	// IMPORTANT! Node declaration is recursive!
	// IMPORTANT! Nodes are located randomly in heap memory
	// IMPORTANT! To find the last node the list must be traversed from the head until next=nullptr
	// Prepare new node
	node* newNode = new node();
	newNode->value = newPerson;
	newNode->next = nullptr;
	// Find last node
	node* last = *head;
	while (last->next != nullptr) {
		last = last->next;
	}
	// Insert node after last node 
	last->next = newNode;
	//
	return 0;
}
// Demonstrate
int ObjectLinkedListImplementation::demonstrateLinkedList() {
	// 15-05-2022 08.05
	int appAction;
	appAction = 0;
	// Declare nodes
	node* head = new node();
	node* second = new node();
	node* third = new node();
	node* fourth = new node();
	node* fifth = new node();
	// Initialize nodes
	head->value = testPersons[0];
	head->next = second;
	second->value = testPersons[1];
	second->next = third;
	third->value = testPersons[2];
	third->next = fourth;
	fourth->value = testPersons[3];
	fourth->next = fifth;
	fifth->value = testPersons[4];
	fifth->next = nullptr;
	// Add new nodes to the front
	addNodetoFront(&head, testPersons[8]);
	addNodetoFront(&head, testPersons[8]);
	addNodetoFront(&head, testPersons[8]);
	// Add new nodes to the end
	addNodetoEnd(&head, testPersons[9]);
	addNodetoEnd(&head, testPersons[9]);
	addNodetoEnd(&head, testPersons[9]);
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
	return 0;
}
// Print
int ObjectLinkedListImplementation::printList(node* n) {
	// 15-05-2022 08.43
	while (n != nullptr) {
		std::cout << n->value.returnName() << std::endl;
		n = n->next;
	}
	//
	return 0;
}
// Options
int ObjectLinkedListImplementation::showOptions() {
	// 14-05-2022 08.09
	int appAction = 0;
	std::cout << "1. Popultate test data" << std::endl;
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
int ObjectLinkedListImplementation::handleOptions() {
	// 14-05-2022 08.09
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Object linked list implimentation--", "V.00.01");
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
	// IMPORTANT! Clean up memory

	//
	return 0;
}