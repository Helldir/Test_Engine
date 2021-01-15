#pragma once
#include "Internal_Combustion_Engine.h"

//абстрактный класс теста. Подразумевается, что можно от него наследовать и создавать любой тест для любого двигателя.
class Test
{
protected:
	Internal_Combustion_Engine* Dvig;//указатель на объект ДВС.
	int Temp;
public:
	virtual float Testing() = 0;
};

