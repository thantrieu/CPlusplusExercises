#pragma once
#include<string>
using namespace std;

class Address
{
private:
	string roadName;
	string number;
	string alley;
	string ward;
	string district;
	string city;
	string nation;
public:
	// hàm khởi tạo
	Address();
	Address(string city);
	Address(string city, string nation);
	Address(string district, string city, string nation);
	string getFullAddress();
	void setCity(string city);
	string getCity();
	void setNation(string nation);
	string getNation();
	void setRoadName(string roadName);
	string getRoadName();
	void setNumber(string number);
	string getNumber();
	void setAlley(string alley);
	string getAlley();
	void setWard(string ward);
	string getWard();
	void setDistrict(string district);
	string getDistrict();
};

