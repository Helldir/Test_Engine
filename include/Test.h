#pragma once
#include "Internal_Combustion_Engine.h"

//����������� ����� �����. ���������������, ��� ����� �� ���� ����������� � ��������� ����� ���� ��� ������ ���������.
class Test
{
protected:
	Internal_Combustion_Engine* Dvig;//��������� �� ������ ���.
	int Temp;
public:
	virtual float Testing() = 0;
};

