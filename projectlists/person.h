#pragma once
// Standard libray headers
#include <string>
class person{
public:
	// Constructors
	person();
	// Updating
	int update(std::string newName, std::string newOccupation, int newAge);
	int updateName(std::string newName);
	// Returning
	std::string returnName();
	std::string returnOccupation();
	int returnAge();
private:
	// Data members
	std::string m_shortUniqueName;
	std::string m_occupation;
	int m_age;
};

