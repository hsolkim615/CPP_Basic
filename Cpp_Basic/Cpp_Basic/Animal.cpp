#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal() { // Animal 클래스의 생성자
	Finger = 10;
	Leg = 2;
}

Animal::Animal(int _Finger, int _Leg) {
	this->Finger = _Finger; 
	this->Leg = _Leg;
}

void Animal::PrintFinger() {
	cout << Finger << endl; 
}

void Animal::PrintLeg() {
	cout << Leg << endl;
}