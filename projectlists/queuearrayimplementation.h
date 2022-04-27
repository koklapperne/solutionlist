#pragma once
// Namespace decalaration
namespace QueueArrayImplementation {
	// Populate test data
	int populateTestData();
	// Select test person
	int selectPersonFromTestData();
	// Initialize
	int initializeQueue();
	// Enqueue
	int enqueueElement();
	// Dequeue
	int dequeueElement();
	// Front
	int front();
	// Print all elements
	int printQueue();
	// Options
	int showQueueImplementationOptions();
	int handleQueueImplementationOptions();
}