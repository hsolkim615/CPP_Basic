#include "io.h"
#include <string> // string클래스 라이브러리 헤더파일

using namespace std;

void StringClass() {
	string Text1 = "Hello SeSac";
	string Text2 = "Hello World";
	
	cout << (Text1 < Text2) << endl; // 알파벳 순서 비교
	cout << (Text1 > Text2) << endl; 
	cout << (Text1 == Text2) << endl; 
	
	cout << (Text1 + Text2) << endl; // 연결 연산 (산술 연산 중 유일하게 가능)

	cout << Text1.front() << endl;
	cout << Text1.back() << endl;
	cout << Text1.size() << endl;
	cout << Text1.at(3) << endl; 

	cout << Text1.append(Text2) << endl; // 문자열을 합해줌 ('+' 같은 것)
	cout << Text2.substr(5) << endl; // 원하는 부분부터 화면에 보여줌
	cout << Text2.find("Hello") << endl; // 원하는 문자열을 찾아줌, 찾으면 해당 문자열의 첫번째 인덱스를 출력
}