#pragma once
#include <iostream>
#include<fstream>
#include <vector>
#include <string>
#include <list>

//����������� ����� ���������. ���������������, ��� �������� ������������ � ���������� ������ ���� ���������, �� ������ ���. 
using namespace std;

class Engine
{
protected:
	float Temp_Engine;
public:
	virtual float  acceleration(int M) = 0;
};

