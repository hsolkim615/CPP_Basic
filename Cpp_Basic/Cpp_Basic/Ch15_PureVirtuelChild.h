#pragma once
#include "Ch15_PureVirtuelParent.h"
#include <iostream>
using namespace std;

class PureVirtualChild : public PureVirtualParent {
public:
	virtual void Print();

	void PrintClass() override; // override는 가상함수를 재정의 하는 것
};