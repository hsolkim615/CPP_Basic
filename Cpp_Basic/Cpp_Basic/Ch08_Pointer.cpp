#include "io.h"

void PointerDefine() {
	
	int a = 10;

	cout << "a : " << a << endl; // �� ���
	cout << "&a : " << & a << endl; // &a : &(�ּ�����) ����

	int* pa = &a; // ������ ������ �ּҰ� ���� // &�� ���� �ּҰ��� �Է¹ޱ� ���ؼ��� int*�� �ʿ��� ��

	cout << "pa : " << pa << endl; // pa�� a�� �ּҰ��� �Է¹޾ұ⿡, �ּҰ��� ���
	cout << "*pa : " << * pa << endl; // ����� �ּ��� ��ġ�� �ִ� ������ ���� ���

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << *pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl;

	int** ppa = &pa; // �����͸� �����ϴ� ������

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,2,3 };
	int* pArray = Array; // Array ��ü�� �ּ��̱� ������ &�� ������ �� �� / Array : ù��° �迭�� �ּ�

	cout << Array << endl;
	cout << pArray << endl;

	cout << Array[0] << endl;
	cout << pArray[0] << endl; 

	cout << *pArray << endl;
	cout << *Array << endl;
	
}