#include <iostream>
#include <cstdlib>
using namespace std;

// �������� ����
// 1 - ��� ���� ��� {1,1,1,1} => ù��° ���� == ������ ����
// 2 - 3�� ����, 1�� �ٸ� ��� 
//     {1,1,1,2} => ù��° ���� == ����° ����, ����° ���� != ������ ���� 
//     {1,2,2,2} => �ι�° ���� == �׹�° ����
// 3 - 2���� ���� ��
//     {1,1,2,2} => ù��° ���� == �ι�° ����, ����° ���� == �׹�° ����
// 4 - 2���� ����, ���� �ٸ� ��
//     {1,1,2,3} => ù��° ���� == �ι�° ����, [�ι�° ���� != ����° ����, �ι�° ���� != �׹�° ����]
//     {1,2,2,3} => �ι�° ���� == ����° ���� 
//     {1,2,3,3} => ����° ���� == �׹�° ���� 
// 5 - ������

void DiceGame(int a, int b, int c, int d) {
	// �������� ����
	int DiceNumber[4] = { a,b,c,d };
	int temp;

	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			temp = DiceNumber[j];
			if (DiceNumber[j] > DiceNumber[j + 1]) {
				temp = DiceNumber[j];
				DiceNumber[j] = DiceNumber[j + 1];
				DiceNumber[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << DiceNumber[i] << " : ";
	}

	cout << endl;
	
	// 1
	if (DiceNumber[0] == DiceNumber[3]) {
		cout << 1111 * DiceNumber[0];
	}
	// 2
	else if (DiceNumber[0] == DiceNumber[2]) {
		cout << (10 * DiceNumber[0] + DiceNumber[3]) * (10 * DiceNumber[0] + DiceNumber[3]) << endl;
	}
	else if (DiceNumber[1] == DiceNumber[3]) {
		cout << (10 * DiceNumber[1] + DiceNumber[0]) * (10 * DiceNumber[1] + DiceNumber[0]) << endl;
	}
	// 3
	else if (DiceNumber[0] == DiceNumber[1] && DiceNumber[2] == DiceNumber[3]) {
		cout << (DiceNumber[0] + DiceNumber[2]) * abs(DiceNumber[0] - DiceNumber[2]) << endl;
	}
	// 4
	else if (DiceNumber[0] == DiceNumber[1]) {
		cout << DiceNumber[2] * DiceNumber[3] << endl;
	}
	else if (DiceNumber[1] == DiceNumber[2]) {
		cout << DiceNumber[0] * DiceNumber[3] << endl;
	}
	else if (DiceNumber[2] == DiceNumber[3]) {
		cout << DiceNumber[0] * DiceNumber[1] << endl;
	}
	// 5
	else {
		cout << DiceNumber[0] << endl;
	}
}