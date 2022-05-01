// Local headers
#include "queuearrayimplementation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global integer constant holding the size of the queue
const int queueCapacity=10;
// Global integer variable holding the top of the stack
int queueRear; // Last element of the queue!
int queueFront; //  First element of the queue!
// Global test data structure declaration
person testQueuePersons[queueCapacity];
// Global stack data structure declaration
person personQueue[queueCapacity];
// Test data
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
	queueFront = -1;
	queueRear = -1;
	//
	return 0;
}
// Is empty
bool QueueArrayImplementation::queueIsEmpty() {
	// 30-04-2022 08.14
	bool result;
	//
	result = false;
	if (queueFront == -1 && queueRear == -1) {
		result = true;
	}
	else {
		result = false;
	}
	//
	return result;
}
// Is full
bool QueueArrayImplementation::queueIsFull() {
	// 01-05-2022 08.28
	bool result;
	//
	result = false;
	if (queueRear == queueCapacity-1) {
		result = true;
	}
	else {
		result = false;
	}
	//
	return result;
}
// Enqueue
int QueueArrayImplementation::enqueueElement() {
	// 25-04-2022 18.50
	// Adding elements to the queue, can only be done at the rear
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
	// Print front and rear
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Queue Rear...: " << queueRear << std::endl;
	std::cout << "Queue Front..: " << queueFront << std::endl;
	// Check if the queue is full
	if (queueIsFull()==true) {
		std::cout << "Queue overflow, queue is full" << std::endl;
	}
	else {
		if (queueFront == -1) {
			queueFront = 0;
		}
		queueRear++;
		personQueue[queueRear] = selectedPerson;
		std::cout << selectedPerson.returnName() << " added to the queue" << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Dequeue
int QueueArrayImplementation::dequeueElement() {
	// 25-04-2022 18.50
	// Removing elements from the queue, can only be done at the front
	// Declarations
	int appAction;
	// Initializations
	appAction = 0;
	person emptyPerson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Print front and rear
	std::cout << "Queue Rear...: " << queueRear << std::endl;
	std::cout << "Queue Front..: " << queueFront << std::endl;
	if (queueIsEmpty()==true) {
		std::cout << "Queue underflow, queue empty" << std::endl;
	}
	else {
		
		if (queueFront > queueRear) {
			queueRear = -1;
			queueFront = -1;
		}
		else {
			personQueue[queueFront] = emptyPerson;
			queueFront++;
		}
		
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print front element
int QueueArrayImplementation::frontQueue() {
	// 01-05-2022 08.41
	int appAction;
	//
	appAction = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	if (queueIsEmpty()==true) {
		std::cout << "Queue underflow, queue empty" << std::endl;
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
int QueueArrayImplementation::printArray() {
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
	std::cout << "2. Enqueue an element to the queue" << std::endl;
	std::cout << "3. Dequeue an element from the queue" << std::endl;
	std::cout << "4. Print the front of the queue" << std::endl;
	std::cout << "5. Print array" << std::endl;
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
			//appAction = printArray();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 5:
			//appAction = TextUserInterface::writeAppNoOption();
			appAction = printArray();
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