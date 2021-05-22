#pragma once
#include <string>
using namespace std;

class FullName
{
private:
	string firstName;
	string lastName;
	string midName;
public:
	FullName();
	FullName(string firstName);
	FullName(string firstName, string lastName);
	FullName(string firstName, string lastName, string midName);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setMidName(string midName);
	string getFirstName();
	string getLastName();
	string getMidName();
	string getFullName();
};

