#include<string>
#include "Address.h"
using namespace std;

Address::Address() {}

Address::Address(string city) : city(city) {}

Address::Address(string city, string nation) : city(city), nation(nation) {}

Address::Address(string district, string city, string nation) :
	district(district), city(city), nation(nation) {}

string Address::getFullAddress() {
	return number + ", " + alley + ", " + roadName + ward +
		", " + district + ", " + city + ", " + nation;
}

void Address::setCity(string city) { this->city = city; }

string Address::getCity() { return city; }

void Address::setNation(string nation) { this->nation = nation; }

string Address::getNation() { return nation; }

void Address::setRoadName(string roadName) { this->roadName = roadName; }

string Address::getRoadName() { return roadName; }

void Address::setNumber(string number) { this->number = number; }

string Address::getNumber() { return number; }

void Address::setAlley(string alley) { this->alley = alley; }

string Address::getAlley() { return alley; }

void Address::setWard(string ward) { this->ward = ward; }

string Address::getWard() { return ward; }

void Address::setDistrict(string district) { this->district = district; }

string Address::getDistrict() { return district; }
