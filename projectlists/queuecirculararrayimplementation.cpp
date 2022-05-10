// Local headers
#include "queuecirculararrayimplementation.h"
#include "person.h"
#include "textuserinterface.h"
// Standard library headers
#include <string>
#include <iostream>
// Global integer constant holding the size of the queue
const int queueCircularCapacity = 10;
// Global integer variable holding the top of the stack
int queueCircularRear; // Last element of the queue!
int queueCircularFront; //  First element of the queue!
// Global test data structure declaration
person testQueueCircularPersons[queueCircularCapacity];
// Global queue data structure declaration
person personQueueCircular[queueCircularCapacity];
// Test data
int QueueCircularArrayImplementation::populateTestData() {
	// 09-05-2022 11.00
	// Declarations
	int appAction;
	person newTestperson;
	// Initializations
	appAction = 0;
	// 0
	newTestperson.update("ABE", "Professor", 55);
	testQueueCircularPersons[0] = newTestperson;
	// 1
	newTestperson.update("TIM", "Student", 21);
	testQueueCircularPersons[1] = newTestperson;
	// 2
	newTestperson.update("ZOE", "Professor", 21);
	testQueueCircularPersons[2] = newTestperson;
	// 3
	newTestperson.update("HAL", "Student", 21);
	testQueueCircularPersons[3] = newTestperson;
	// 4
	newTestperson.update("SAL", "Student", 20);
	testQueueCircularPersons[4] = newTestperson;
	// 5
	newTestperson.update("MIT", "Teacher", 35);
	testQueueCircularPersons[5] = newTestperson;
	// 6
	newTestperson.update("ITM", "Student", 21);
	testQueueCircularPersons[6] = newTestperson;
	// 7
	newTestperson.update("LEO", "Teacher", 32);
	testQueueCircularPersons[7] = newTestperson;
	// 8
	newTestperson.update("ZED", "Student", 24);
	testQueueCircularPersons[8] = newTestperson;
	// 9
	newTestperson.update("BEA", "Student", 21);
	testQueueCircularPersons[9] = newTestperson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Test data populated" << std::endl;
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
int QueueCircularArrayImplementation::selectPersonFromTestData() {
	// 09-05-2022 11.05
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
		std::cout << i << ": " << testQueueCircularPersons[i].returnName() << std::endl;
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
int QueueCircularArrayImplementation::initializeQueue() {
	// 09-05-2022 11.13
	queueCircularRear = -1;
	queueCircularFront = -1;
	//
	return 0;
}
// Is empty
bool QueueCircularArrayImplementation::queueIsEmpty() {
	// 09-05-2022 12.28
	bool result;
	//
	result = false;
	if (queueCircularFront == -1) {
		result = true;
	}
	else {
		result = false;
	}
	//
	return result;
}
// Is full
bool QueueCircularArrayImplementation::queueIsFull() {
	// 09-05-2022 12.50
	bool result;
	//
	result = false;
	if (queueCircularFront == 0 && queueCircularRear == queueCircularCapacity - 1) {
		result = true;
	}
	if (queueCircularFront == queueCircularRear + 1) {
		result = true;
	}
	//
	return result;
}
// Enqueue
int QueueCircularArrayImplementation::enqueueElement() {
	// 09-05-2022 18.50
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
	selectedPerson = testQueueCircularPersons[selectedIndex];
	// Print front and rear
	appAction = TextUserInterface::writeSelectionHighlighter();
	std::cout << "Queue Rear...: " << queueCircularRear << std::endl;
	std::cout << "Queue Front..: " << queueCircularFront << std::endl;
	// Check if the queue is full
	if (queueIsFull() == true) {
		std::cout << "Queue overflow, queue is full" << std::endl;
	}
	else {
		if (queueCircularFront == -1) {
			queueCircularFront = 0;
		}
		queueCircularRear = (queueCircularRear+1) % queueCircularCapacity; // IMPORTANT! This results in the circular nature!
		personQueueCircular[queueCircularRear] = selectedPerson;
		std::cout << selectedPerson.returnName() << " added to the circular queue" << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Dequeue
int QueueCircularArrayImplementation::dequeueElement() {
	// 09-05-2022 13.11
	// Removing elements from the queue, can only be done at the front
	// Declarations
	int appAction;
	// Initializations
	appAction = 0;
	person emptyPerson;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Print front and rear
	std::cout << "Queue Front..: " << queueCircularFront << std::endl;
	std::cout << "Queue Rear...: " << queueCircularRear << std::endl;
	if (queueIsEmpty() == true) {
		std::cout << "Queue underflow, queue empty" << std::endl;
	}
	else {

		if (queueCircularFront == queueCircularRear) {
			queueCircularRear = -1;
			queueCircularFront = -1;
		}
		else {
			std::cout << personQueueCircular[queueCircularFront].returnName() << " dequeued from the queue" << std::endl;
			personQueueCircular[queueCircularFront] = emptyPerson;
			queueCircularFront = (queueCircularFront + 1) % queueCircularCapacity;
		}

	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Print all elements
int QueueCircularArrayImplementation::printArray() {
	// 09-05-2022 13.32
	int appAction;
	int i;
	//
	appAction = 0;
	i = 0;
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	// Print front and rear
	std::cout << "Queue Rear...: " << queueCircularRear << std::endl;
	std::cout << "Queue Front..: " << queueCircularFront << std::endl;
	// Inspect all elements of the list
	for (i = 0; i < queueCircularCapacity; i++) {
		std::cout << i << ": " << personQueueCircular[i].returnName() << std::endl;
	}
	//
	appAction = TextUserInterface::writeSelectionHighlighter();
	appAction = TextUserInterface::writeActionSeperator();
	return 0;
}
// Options
int QueueCircularArrayImplementation::showQueueCircularArrayImplementationOptions() {
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
int QueueCircularArrayImplementation::handleQueueCircularArrayImplementationOptions() {
	// 25-04-2022 18.50
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Initialize the queue
	//appAction = initializeQueue();
	// Operations 
	while (stop == false) {
		appAction = TextUserInterface::writeSubFunctionalityInformation("--Circular queue array implimentation--", "V.00.01");
		appAction = showQueueCircularArrayImplementationOptions();
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
			appAction = printArray();
			break;
		case 4:
			appAction = TextUserInterface::writeAppNoOption();
			break;
		case 5:
			appAction = TextUserInterface::writeAppNoOption();
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