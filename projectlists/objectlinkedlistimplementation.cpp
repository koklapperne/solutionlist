// Local headers
#include "objectlinkedlistimplementation.h"
#include "textuserinterface.h"
// Standard library headers
#include <iostream>
// Global test data structure declaration
person linkedListTestPersons[10];
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
	linkedListTestPersons[0] = newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	linkedListTestPersons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	linkedListTestPersons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	linkedListTestPersons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	linkedListTestPersons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	linkedListTestPersons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	linkedListTestPersons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	linkedListTestPersons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	linkedListTestPersons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	linkedListTestPersons[9] = newTestperson;
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
		std::cout << i << ": " << linkedListTestPersons[i].returnName() << std::endl;
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
// Add
int ObjectLinkedListImplementation::addElementFront(node** head, person newPerson) {
	// 14-05-2022 09.55
	// Prepare new node
	// IMPORTANT! head is a pointer to a pointer!
	// IMPORTANT! parameters are passed as reference!
	node* newNode = new node();
	// Put new node in front of current head
	newNode->m_next = *head;
	// Move head to the new node
	*head = newNode;
	//
	return 0;

}
// Print
int ObjectLinkedListImplementation::printList(node* n) {
	// 14-05-2022 10.16
	while (n != nullptr) {
		std::cout << n->m_value.returnName() << std::endl;
	}
	//
	return 0;
}
// Options
int ObjectLinkedListImplementation::showOptions() {
	// 14-05-2022 08.09
	int appAction = 0;
	std::cout << "1. Popultate test data" << std::endl;
	std::cout << "2. Add element at the front" << std::endl;
	std::cout << "3. Add element at the rear" << std::endl;
	std::cout << "4. Add element at arbitrary position " << std::endl;
	std::cout << "5. # " << std::endl;
	std::cout << "6. Print list" << std::endl;
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
	// IMPORTANT! Declare the head of the linked list here to ensure the scope!
	node* head = new node();
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
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = ObjectArrayImplementation::populateList();
			break;
		case 2:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = findElement();
			break;
		case 3:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = modifyElement();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = addElement();
			break;
		case 5:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = deleteElement();
			break;
		case 6:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = printList();
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
	delete head;
	//
	return 0;
}