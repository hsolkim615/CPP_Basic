#include "io.h"
#include <array> // array Ŭ����	���̺귯�� �������

using namespace std;

void ArrayClass() {
	array<int, 3> Number = { 10,20,30 }; // arrayŬ������ �迭�� ���� ��

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl; 
}