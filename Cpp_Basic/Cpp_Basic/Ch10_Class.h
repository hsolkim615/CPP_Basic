#pragma once

class Car {
	char Name[30];
	int  Year;
	int Velocity;

public:
	Car(int V) // 생성자는 타입을 쓰지 않는다. 또한 매개변수를 통하지 않고 직접 값을 넣는 것도 가능하다. 
	{   
		Velocity = V;
	}
	void DriveVelocity(); // 함수원형 선언
	void DriveTime();
};	