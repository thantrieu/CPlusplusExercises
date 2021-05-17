#include <iostream>
using namespace std;

class Cat {
public:
	string name;
	int age = 0;
	string favoriteFood;
	string color;

	void move();
	void sleep();
	void catInfo();
};

void Cat::move() {
	cout << name << " is running on the ground.";
}

void Cat::sleep() {
	cout << name << " is sleeping buzz buzz buzz...!!" << endl;
}

void Cat::catInfo() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
	cout << "Favorite food: " << favoriteFood << endl;
}

int main() {
	Cat tom;
	Cat meo;
	Cat miu;
	Cat x; //....
	Cat* catPtr = &miu;
	tom.name = "Tom";
	tom.age = 5;
	tom.color = "Black";
	tom.favoriteFood = "Fish";
	cout << "============== Cat infomation ==============\n";
	tom.move();
	tom.sleep();
	tom.catInfo();
	// con tro
	cout << "============== Cat infomation ==============\n";
	catPtr->name = "Maomao";
	catPtr->age = 2;
	catPtr->color = "White";
	catPtr->favoriteFood = "Meet";
	catPtr->move();
	catPtr->sleep();
	catPtr->catInfo();

	return 0;
}