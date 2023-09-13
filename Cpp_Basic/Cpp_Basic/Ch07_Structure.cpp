#include "io.h"

void Structure()
{
  // 구조체 서술 정의 : 데이터 타입을 생성
  struct inflatable // inflatable이라는 데이터 타입을 생성한 것, 구조체의 이름은 소문자로 시작한다. 
  {
  	char name[20];
  	float volume;
  	double price;
  };

  inflatable people = { "Tom", 0.75, 15.235};

  struct sesac // sasac이라는 하나의 데이터 타입을 생성한 것
  {
    // 멤버 변수
    char name[20];
    char addressp[100];
    char phone[20];
    int age;
  };

  sesac Banjang; // 구조체 대입
  Banjang = {"Jane", "서울시", "01012345678", 25};
  Banjang.age = 30; // 특정 값만 구조체 대입
  
}

void Enum()
{
  // enum : 열거형 데이터 타입
  // Sun, Mon, Tue ... Sat : 열거형 상수
  // 0부터 시작하는 양수를 열거형 상수의 값으로 할당 
  enum day {Sun, Mon, Tue, Wed = 10, Thu, Fri, Sat}; 
  
  day DayName; // day라는 타입의 DayName이라는 변수
  DayName = Sat;

  switch (DayName)
    {
      case Sun:
        cout << "bycycle";
        break;
      case Mon:
        cout << "work";
        break;
      case Tue:
        cout << "bycycle";
        break;
      case Wed:
        cout << "bycycle";
        break;      
      case Thu:
        cout << "bycycle";
        break;
      case Fri:
        cout << "bycycle";
        break;
      case Sat:
        cout << "party";
        break;
    }
}

void ChangeValue(int a)
{
  a = 0;
}

int ChangeValue2()
{
  return 0;
}

int c = 10;

void CallByValue() // 값에 의한 호출 -> 변수의 적용 범위가 중요 
{
  // ChangeValue(c); 
  c = ChangeValue2();
}