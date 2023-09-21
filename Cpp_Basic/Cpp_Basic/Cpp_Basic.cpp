// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "io.h"
#include "Cpp_Basic.h"

#include "Ch10_Class.h"
#include "Vehecle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"
#include "Ch14_VirtualParent.h"
#include "Ch14_VirtualChild.h"
#include "Ch15_PureVirtuelParent.h"
#include "Ch15_PureVirtuelChild.h"

#define PLUS (2+3) 

int main()
{
/*    cout << "Hello SeSac!\n";

    // class 정적 선언
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();
    
    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    Vehicle Sonata;

    // class 동적 선언(생성)
    Animal* Dog = new Animal;
    Dog->PrintFinger(); // Dog는 주소값을 담고 있음, 포인터로 선언된 것

    delete Dog;

    // 자식 클래스 생성
    Atv Moto;

    // 상속받은 Bike class의 멤버
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class 멤버
    Moto.PrintPrice();

    // 함수 오버로딩
    Arithmatic Expression;

    Expression.Sum(50);
    
    Expression.Sum(50.123f);

    Expression.Sum(60, 70);
    
    // 함수 오버라이딩
    Moto.Print();

    // 생성자가 명시적으로 선언 
    // 자식 클래스 선언 : 명시적 선언

    cout << "---------------------------" << endl;
    Auto Mobile();

    Auto Aavnte(2024, 10000000);

    cout << "---------------------------" << endl;
    // ArrayClass();

    // StringClass();
    
    // VectorClass();

    cout << "---------------------------" << endl;

    VirtualParent* Parent = new VirtualParent;
    VirtualChild* Child = new VirtualChild;

    Parent->PrintClass();

    Child->PrintClass(); // Overriding 작동 

    Parent = Child; // 함수는 정적선언 되어 있기 때문에 대입이 되지 않음

    Parent->PrintClass();

    
    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass();

    Child2->PrintClass(); // Overriding 작동 

    Parent2 = Child2; // 함수도 바뀜

    Parent2->PrintClass();

    cout << "---------------------------" << endl;

    // PureVirtualParent PureParent; => 추상클래스는 단독으로 생성할 수 없음
    // 추상 클래스를 상속받는 자식 클래스는 순수 가사함수를 재정의 해야함
    PureVirtualChild PureChild;
    PureChild.Print();
    PureChild.PrintClass();

    cout << "---------------------------" << endl;

    cout << SumNumber(3, 2) << endl;
    cout << SumNumber(3.231f, 5.645f) << endl;

    cout << SumType(10, 20) << endl;
    cout << SumType(10.567, 20.321) << endl;
*/

    DiceGame(2,2,2,2);
    DiceGame(4,1,4,1);
    DiceGame(6,3,3,6);
    DiceGame(2,5,2,6);
    DiceGame(6,4,2,5);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files    
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
