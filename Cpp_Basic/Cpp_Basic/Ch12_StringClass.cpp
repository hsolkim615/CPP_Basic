#include "io.h"
#include <string> // stringŬ���� ���̺귯�� �������

using namespace std;

void StringClass() {
	string Text1 = "Hello SeSac";
	string Text2 = "Hello World";
	
	cout << (Text1 < Text2) << endl; // ���ĺ� ���� ��
	cout << (Text1 > Text2) << endl; 
	cout << (Text1 == Text2) << endl; 
	
	cout << (Text1 + Text2) << endl; // ���� ���� (��� ���� �� �����ϰ� ����)

	cout << Text1.front() << endl;
	cout << Text1.back() << endl;
	cout << Text1.size() << endl;
	cout << Text1.at(3) << endl; 

	cout << Text1.append(Text2) << endl; // ���ڿ��� ������ ('+' ���� ��)
	cout << Text2.substr(5) << endl; // ���ϴ� �κк��� ȭ�鿡 ������
	cout << Text2.find("Hello") << endl; // ���ϴ� ���ڿ��� ã����, ã���� �ش� ���ڿ��� ù��° �ε����� ���
}