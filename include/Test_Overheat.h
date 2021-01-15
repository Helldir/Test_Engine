#pragma once
#include "Test.h"
#include "Internal_Combustion_Engine.h"



class Test_Overheat :
    public Test
{
public:
    Test_Overheat(int T, Internal_Combustion_Engine* Eng);//конструктор, принимающий температуру окружающей среды и двигатель внутреннего сгорания.
    float Testing();
    //void Display_Test();//прототип функции отображения графика. При необходимости возможна реализация построения графика результата тестирования. 
    float heating_rate(int M, int V);//скорость нагрева
    float rate_of_cooling(int Tour, float Teng);//скорость охлаждения
};

