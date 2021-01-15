#pragma once
#include <iostream>
#include<fstream>
#include <vector>
#include <string>
#include <list>

//абстрактный класс двигателя. Подразумевается, что возможно наследование и реализация любого типа двигателя, не только ДВС. 
using namespace std;

class Engine
{
protected:
	float Temp_Engine;
public:
	virtual float  acceleration(int M) = 0;
};

