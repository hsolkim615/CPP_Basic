#pragma once

class Car {
	char Name[30];
	int  Year;
	int Velocity;

public:
	Car(int V) // �����ڴ� Ÿ���� ���� �ʴ´�. ���� �Ű������� ������ �ʰ� ���� ���� �ִ� �͵� �����ϴ�. 
	{   
		Velocity = V;
	}
	void DriveVelocity(); // �Լ����� ����
	void DriveTime();
};	