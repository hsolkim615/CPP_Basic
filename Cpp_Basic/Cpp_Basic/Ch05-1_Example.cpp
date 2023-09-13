#include "io.h"
//
//void CountNumber()
//{
//  int Counter = 0;
//  cout << "숫자 개수를 입력해주세요 : ";
//  cin >> Counter;
//
//
//
//  // int Number[Counter];
//  
//
//  for(int i=0; i<Counter; i++)
//    {
//      cout << "수 데이터를 입력해주세요 : ";
//      cin >> Number[i];
//    }
//  
//  int FindNumber = 0;
//  cout << "찾을 수를 입력해주세요 : ";
//  cin >> FindNumber;
//
//  int FindCount = 0;
//  for(int i=0; i<Counter; i++)
//    {
//      if(Number[i] == FindNumber)
//      {
//        FindCount++;
//      }
//    }
//
//  cout << "찾눈 수의 개수는 " << FindCount << "개 입니다." << endl;
//}
//
//void LessNumber()
//{
//  int Counter = 0;
//  cout << "숫자 개수를 입력해주세요 : ";
//  cin >> Counter;
//
//  int FindNumber = 0;
//  cout << "기준 수를 입력해주세요 : ";
//  cin >> FindNumber;
//
//  int Number[Counter];
//  for(int i=0; i<Counter; i++)
//    {
//      cout << "수 데이터를 입력해주세요 : ";
//      cin >> Number[i];
//    }
//
//  for(int i=0; i<Counter; i++)
//    {
//      if(FindNumber > Number[i])
//      {
//        cout << Number[i] << " : ";
//      }
//    }
//}
//
//void MissingNumber()
//{
//  int Counter = 0;
//  cout << "학생 수를 입력해주세요 : ";
//  cin >> Counter;
//
//  int FindNumber = 0;
//  cout << "과제 제출하지 않은 학생 수를 입력해주세요 : ";
//  cin >> FindNumber;
//
//  // 전체 학생의 번호 데이터 Set
//  int TotalMember[Counter]; // 학생 수만큼 배열을 선언
//  for(int i=0; i<Counter; i++) // 각 배열마다 번호를 부여함 (1 ~ Counter)
//    {
//      TotalMember[i] = i+1;
//    }
//
//  // 과제 제출한 학생 번호 Set
//  int WorkMember[Counter - FindNumber]; // 과제를 낸 사람만큼 배열을 선언
//  for(int i=0; (i<Counter - FindNumber); i++)
//    {
//      cin >> WorkMember[i]; // 과제 낸 사람의 번호를 입력, 이때 번호는 1부터 순서대로 들어가지 않음(랜덤)
//    }
//
//  // 제출 확인용 배열 변수 Set
//  bool Check[Counter];
//  for(int i=0; i<Counter; i++)
//    {
//      Check[i] = false;
//    }
//
//  // 제출한 학생, 미제출 학생 구분 - true/false 
//  for(int i=0; i<Counter - FindNumber; i++) 
//    {
//    for(int j=0; j<Counter; j++)
//      {
//        if(WorkMember[i] == TotalMember[j]) 
//        {
//          Check[j] = true; // 과제를 낸 학생의 배열에는 true값을 넣음
//        }
//      }
//    }
//
//  // 미제출 학생 번호 추출
//  for(int i=0; i<Counter; i++)
//    {
//      if(Check[i] == false)
//      {
//        cout << i+1 << "번 안냄" << endl;
//      }
//    }
//}