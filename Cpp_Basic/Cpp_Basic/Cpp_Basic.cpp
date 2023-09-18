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

#define PLUS (2+3) 

int main()
{
    cout << "Hello SeSac!\n";

    // class ���� ����
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();
    
    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    // class ���� ����(����)
    Animal* Dog = new Animal;
    Dog->PrintFinger(); // Dog�� �ּҰ��� ��� ����, �����ͷ� ����� ��

    delete Dog;

    // �ڽ� Ŭ���� ����
    Atv Moto;

    // ��ӹ��� Bike class�� ���
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class ���
    Moto.PrintPrice();

    // �Լ� �����ε�
    Arithmatic Expression;

    Expression.Sum(50);
    
    Expression.Sum(50.123f);

    Expression.Sum(60, 70);
    
    // �Լ� �������̵�
    Moto.Print();

    // �����ڰ� ��������� ���� 
    // �ڽ� Ŭ���� ���� : ����� ����
    // Auto Mobile();

    // Mobile().PrintPrice();
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
