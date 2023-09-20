#include "io.h"
#include <vector> // ���� Ŭ���� �������
using namespace std;

void VectorClass() {
	// ���� ����
	vector<int> vd1; // vd1 �迭 ���� : vd1 - ���� ����,���� ��� �������� ���� 
	vector<int> vd2(3); // ���� ������ ����
	vector<int> vd3(3, 2); // ���� ������ ���� ���� ��� ������

	vd1.push_back(33); // �迭�� ������ �ε����� ���Ҹ� �־���

	cout << vd1.front() << endl;

	vd1.push_back(55);

	cout << vd1.at(1) << endl; 

	vd1.push_back(77);

	cout << vd1.size() << endl;

	vd1.pop_back(); // ������ �ε����� ���Ҹ� �����Ѵ�. �ٸ�, �Ҵ�� �ε����� ��������

	cout << vd1.size() << endl;

	cout << vd1.capacity() << endl; 
}	