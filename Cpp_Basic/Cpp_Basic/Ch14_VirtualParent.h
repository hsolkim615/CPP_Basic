#pragma once
#include <iostream>
using namespace std;

class VirtualParent {
public:
	void PrintClass();
};

class VirtualParent2 {
public:
	virtual void PrintClass(); // 가상함수 선언, 타입 앞에 virtual을 붙임
};