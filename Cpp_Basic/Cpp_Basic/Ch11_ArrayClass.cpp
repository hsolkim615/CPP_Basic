#include "io.h"
#include <array> // array 클래스	라이브러리 헤더파일

using namespace std;

void ArrayClass() {
	array<int, 3> Number = { 10,20,30 }; // array클래스로 배열을 만든 것

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl; 
}