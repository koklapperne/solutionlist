#pragma once
// Namespace declaration
namespace QueueCircularArrayImplementation {
	// Populate test data
	int populateTestData();
	// Select test person
	int selectPersonFromTestData();
	// Initialize
	int initializeQueue();
	// Is empty
	bool queueIsEmpty();
	// Is full
	bool queueIsFull();
	// Enqueue
	int enqueueElement();
	// Dequeue
	int dequeueElement();
	// Print all elements
	int printArray();
	// Options
	int showQueueCircularArrayImplementationOptions();
	int handleQueueCircularArrayImplementationOptions();
}