#include <iostream>
#include <string>
#include "Person.h"
#include "Address.h"
#include "FullName.h"
using namespace std;

Person::Person() {}

Person::Person(string id) : id(id) {}

Person::Person(FullName fullName) : fullName(fullName) {}

Person::Person(string id, FullName fullName) : id(id), fullName(fullName) {}

Person::Person(string id, FullName fullName, string gender) :
	id(id), fullName(fullName), gender(gender) {}

Person::Person(string id, FullName fullName, Address address, string dob,
	string email, string phoneNum, string occupation, string gender) :
	id(id), fullName(fullName), address(address), dateOfBirth(dob),
	email(email), phoneNumber(phoneNum), occupation(occupation), gender(gender) {}

//getter and setter
void Person::setId(string id) { this->id = id; }

string Person::getId() { return id; }

void Person::setAddress(Address address) { this->address = address; }

Address Person::getAddress() { return address; }

void Person::setFullName(FullName fullName) { this->fullName = fullName; }

FullName Person::getFullName() { return fullName; }

void Person::setDateOfBirth(string dateOfBirth) { this->dateOfBirth = dateOfBirth; }

string Person::getDateOfBirth() { return dateOfBirth; }

void Person::setEmail(string email) { this->email = email; }

string Person::getEmail() { return email; }

void Person::setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }

string Person::getPhoneNumber() { return phoneNumber; }

void Person::setOccupation(string occupation) { this->occupation = occupation; }

string Person::getOccpation() { return occupation; }

void Person::setGender(string gender) { this->gender = gender; }

string Person::getGender() { return gender; }

void Person::sleep() {
	cout << fullName.getFullName() << " is sleeping." << endl;
}

void Person::eat() {
	cout << fullName.getFullName() << " is eating lunch." << endl;
}

void Person::work() {
	cout << fullName.getFullName() << " is working in the garden." << endl;
}

void Person::relax() {
	cout << fullName.getFullName() << " is relaxing by playing with a cat.\n";
}