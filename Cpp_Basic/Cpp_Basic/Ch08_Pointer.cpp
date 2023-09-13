#include "io.h"

void PointerDefine() {
	
	int a = 10;

	cout << "a : " << a << endl; // 값 출력
	cout << "&a : " << & a << endl; // &a : &(주소참조) 연산

	int* pa = &a; // 포인터 변수에 주소값 대입 // &를 통한 주소값을 입력받기 위해서는 int*가 필요한 것

	cout << "pa : " << pa << endl; // pa는 a의 주소값을 입력받았기에, 주소값을 출력
	cout << "*pa : " << * pa << endl; // 저장된 주소의 위치에 있는 변수의 값을 출력

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << *pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl;

	int** ppa = &pa; // 포인터를 참조하는 포인터

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,2,3 };
	int* pArray = Array; // Array 자체가 주소이기 때문에 &를 넣으면 안 됨 / Array : 첫번째 배열의 주소

	cout << Array << endl;
	cout << pArray << endl;

	cout << Array[0] << endl;
	cout << pArray[0] << endl; 

	cout << *pArray << endl;
	cout << *Array << endl;
	
}