#pragma once

class PureVirtualParent {
public:
	virtual void PrintClass() = 0; // 순수가상함수, 가상함수에 '= 0'을 넣어준다. 
};