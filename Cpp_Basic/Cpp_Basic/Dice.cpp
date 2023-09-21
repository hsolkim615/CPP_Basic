#include <iostream>
#include <cstdlib>
using namespace std;

// 오름차순 정렬
// 1 - 모두 같은 경우 {1,1,1,1} => 첫번째 원소 == 마지막 원소
// 2 - 3개 같고, 1개 다른 경우 
//     {1,1,1,2} => 첫번째 원소 == 세번째 원소, 세번째 원소 != 마지막 원소 
//     {1,2,2,2} => 두번째 원소 == 네번째 원소
// 3 - 2개씩 같은 값
//     {1,1,2,2} => 첫번째 원소 == 두번째 원소, 세번째 원소 == 네번째 원소
// 4 - 2개가 같고, 각각 다른 값
//     {1,1,2,3} => 첫번째 원소 == 두번째 원소, [두번째 원소 != 세번째 원소, 두번째 원소 != 네번째 원소]
//     {1,2,2,3} => 두번째 원소 == 세번째 원소 
//     {1,2,3,3} => 세번째 원소 == 네번째 원소 
// 5 - 나머지

void DiceGame(int a, int b, int c, int d) {
	// 오름차수 정렬
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