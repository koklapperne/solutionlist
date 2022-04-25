#include "person.h"
// Data member function definitions
// Conctructors
person::person() {
	// 21-04-2022 10.27
	// Default constructor
	m_shortUniqueName = "***";
	m_occupation = "*";
	m_age = 0;
}
// Updating
int person::update(std::string newName, std::string newOccupation, int newAge) {
	// 21-04-2022 10.27
	m_shortUniqueName = newName;
	m_occupation = newOccupation;
	m_age = newAge;
	//
	return 0;
}
int person::updateName(std::string newName) {
	// 21-04-2022 10.27
	m_shortUniqueName = newName;
	
	//
	return 0;
}
// Returning
std::string person::returnName() {
	// 21-04-2022 10.27
	std::string result;
	result = "*";
	if (m_shortUniqueName != "") {
		result = m_shortUniqueName;
	}
	//
	return result;
}
std::string person::returnOccupation() {
	// 21-04-2022 10.27
	std::string result;
	result = "*";
	if (m_occupation != "") {
		result = m_occupation;
	}
	//
	return result;
}
int person::returnAge() {
	// 21-04-2022 10.27
	int result;
	result = 0;
	if (m_age > 0) {
		result = m_age;
	}
	//
	return result;
}