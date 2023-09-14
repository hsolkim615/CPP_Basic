#include "io.h"

void DynamicVariable() {
	int* pNum = new int; // 동적 변수를 선언한 것
	char* pValue = new char;
		
	*pNum = 10;
	*pValue = 'a';

	cout << pNum << endl;// 10의 주소값
	cout << pValue << endl; // a의 주소값

	cout << *pNum << endl;
	cout << *pValue << endl;

	delete pNum;
	delete pValue;

	int a[3] = { 1,2,3 };
	int* pa = a; // 배열변수는 기본으로 주소값이 들어있기 때문에 &를 쓸 필요가 없다. 

	cout << a[0] << ":" << pa[0] << endl; 

	int size = 3;
	int* pArray = new int[size]; 

	pArray[0] = 10;

	cout << pArray[0] << endl; 
}