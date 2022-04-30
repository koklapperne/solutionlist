#pragma once
// Namespace decalaration
namespace QueueArrayImplementation {
	// Populate test data
	int populateTestData();
	// Select test person
	int selectPersonFromTestData();
	// Initialize
	int initializeQueue();
	// Is empty
	bool queueIsEmpty();
	// Enqueue
	int enqueueElement();
	// Dequeue
	int dequeueElement();
	// Front
	int frontQueue();
	// Print all elements
	int printArray();
	// Options
	int showQueueImplementationOptions();
	int handleQueueImplementationOptions();
}