#pragma once
#include <string>
#include "Address.h"
#include "FullName.h"
using namespace std;

class Person
{
private:
	string id;
	FullName fullName;
	Address address;
	string dateOfBirth;
	string email;
	string phoneNumber;
	string occupation;
	string gender;
public:
	// hàm khởi tạo
	Person();
	Person(string id);
	Person(FullName fullName);
	Person(string id, FullName fullName);
	Person(string id, FullName fullName, string gender);
	Person(string id, FullName fullName, Address address, string dob,
		string email, string phoneNum, string occupation, string gender);
	//getter and setter
	void setId(string id);
	string getId();
	void setAddress(Address address);
	Address getAddress();
	void setFullName(FullName fullName);
	FullName getFullName();
	void setDateOfBirth(string dateOfBirth);
	string getDateOfBirth();
	void setEmail(string email);
	string getEmail();
	void setPhoneNumber(string phoneNumber);
	string getPhoneNumber();
	void setOccupation(string occupation);
	string getOccpation();
	void setGender(string gender);
	string getGender();
	// hành động
	void sleep();
	void eat();
	void work();
	void relax();
};

