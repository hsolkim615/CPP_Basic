#include "io.h"
#include <vector> // 벡터 클래스 헤더파일
using namespace std;

void VectorClass() {
	// 동적 생성
	vector<int> vd1; // vd1 배열 생성 : vd1 - 원소 개수,내용 모두 지정되지 않음 
	vector<int> vd2(3); // 원소 개수만 지정
	vector<int> vd3(3, 2); // 원소 개수와 원소 내용 모두 지정됨

	vd1.push_back(33); // 배열의 마지막 인덱스에 원소를 넣어줌

	cout << vd1.front() << endl;

	vd1.push_back(55);

	cout << vd1.at(1) << endl; 

	vd1.push_back(77);

	cout << vd1.size() << endl;

	vd1.pop_back(); // 마지막 인덱스의 원소를 삭제한다. 다만, 할당된 인덱스는 남아있음

	cout << vd1.size() << endl;

	cout << vd1.capacity() << endl; 
}	