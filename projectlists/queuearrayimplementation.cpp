// Local headers
#include "queuearrayimplementation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global integer constant holding the size of the queue
const int max = 10;
const int queueCapacity=10;
// Global integer variable holding the top of the stack
int queueFront; // First element of the list!
int queueRear; // Last element of the list!
// Global test data structure declaration
person testQueuePersons[queueCapacity];
// Global stack data structure declaration
person personQueue[max];
int QueueArrayImplementation::populateTestData() {
	// 25-04-2022 18.50
	// Declarations
	int appAction;
	person newTestperson;
	// Initializations
	appAction = 0;
	// 0
	newTestperson.update("ABE", "Professor", 55);
	testQueuePersons[0] = newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	testQueuePersons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	testQueuePersons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	testQueuePersons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	testQueuePersons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	testQueuePersons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	testQueuePersons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	testQueuePersons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	testQueuePersons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	testQueuePersons[9] = newTestperson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Test data populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
int QueueArrayImplementation::selectPersonFromTestData() {
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
		std::cout << i << ": " << testQueuePersons[i].returnName() << std::endl;
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
int QueueArrayImplementation::initializeQueue() {
	// 25-04-2022 18.50
	queueFront = 0;
	queueRear = 0;
	//
	return 0;
}
// Enqueue
int QueueArrayImplementation::enqueueElement() {
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
	selectedPerson = testQueuePersons[selectedIndex];
	// Enqueue test person 
	// Check if the queue is full
	if (queueRear >= queueCapacity) {
		std::cout << "Queue overflow" << std::endl;
	}
	else {
		personQueue[queueRear] = selectedPerson;
		queueRear++;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Dequeue
int QueueArrayImplementation::dequeueElement() {
	// 25-04-2022 18.50
	int appAction;
	//
	appAction = 0;
	person rearPerson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (queueRear <= 0) {
		std::cout << "Queue underflow" << std::endl;
	}
	else {
		queueRear--;
		std::cout << "Rear: " << queueRear << std::endl;
		std::cout << personQueue[queueRear].returnName() << " dequeued from the queue" << std::endl;
		personQueue[queueRear] = rearPerson;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print front element
int QueueArrayImplementation::frontQueue() {
	// 25-04-2022 18.50
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (queueRear <=0) {
		std::cout << "Queue underflow" << std::endl;
	}
	else {
		std::cout << "Rear: " << queueRear << std::endl;
		std::cout << personQueue[queueRear].returnName() << std::endl;
	}
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print all elements
int QueueArrayImplementation::printQueue() {
	// 25-04-2022 18.50
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Inspect all elements of the list
	for (i = 0; i < queueCapacity; i++) {
		std::cout << i << ": " << personQueue[i].returnName() << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int QueueArrayImplementation::showQueueImplementationOptions() {
	// 25-04-2022 18.50
	int appAction = 0;
	std::cout << "1. Popultate test data" << std::endl;
	std::cout << "2. Enqueue an element to the que" << std::endl;
	std::cout << "3. Dequeue an element from the que" << std::endl;
	std::cout << "4. Print the front of the que " << std::endl;
	std::cout << "5. Print que" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}
int QueueArrayImplementation::handleQueueImplementationOptions() {
	// 25-04-2022 18.50
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Initialize the stack
	appAction = initializeQueue();
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Queue array implimentation--", "V.00.01");
		appAction = showQueueImplementationOptions();
		appAction = TextUserInterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = TextUserInterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			//appAction = TextUserInterface::writeAppNoOption();
			appAction = populateTestData();
			break;
		case 2:
			//appAction = TextUserInterface::writeAppNoOption();
			appAction = enqueueElement();
			break;
		case 3:
			//appAction = TextUserInterface::writeAppNoOption();
			appAction = dequeueElement();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			//appAction = peek();
			break;
		case 5:
			//appAction = TextUserInterface::writeAppNoOption();
			appAction = printQueue();
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