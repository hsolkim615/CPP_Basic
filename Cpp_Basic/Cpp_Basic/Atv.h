#pragma once
#include "Bike.h"

class Atv : public Bike {

	int Year = 2022;

public:
	void PrintPrice();
	void Print(); // 부모클래스와 같은 이름의 함수 선언
};