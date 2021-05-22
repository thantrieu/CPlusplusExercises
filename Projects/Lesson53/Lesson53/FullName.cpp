#include <iostream>
#include <string>
#include "FullName.h"
using namespace std;

FullName::FullName() {}

FullName::FullName(string firstName) : firstName(firstName) {}

FullName::FullName(string firstName, string lastName) :
	firstName(firstName), lastName(lastName) {}

FullName::FullName(string firstName, string lastName, string midName) :
	firstName(firstName), lastName(lastName), midName(midName) {}

void FullName::setFirstName(string firstName) {
	this->firstName = firstName;
}

void FullName::setLastName(string lastName) {
	this->lastName = lastName;
}

void FullName::setMidName(string midName) {
	this->midName = midName;
}

string FullName::getFirstName() {
	return firstName;
}

string FullName::getLastName() {
	return lastName;
}

string FullName::getMidName() {
	return midName;
}

string FullName::getFullName() {
	return firstName + " " + lastName + " " + midName;
}