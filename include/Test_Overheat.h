#pragma once
#include "Test.h"
#include "Internal_Combustion_Engine.h"



class Test_Overheat :
    public Test
{
public:
    Test_Overheat(int T, Internal_Combustion_Engine* Eng);//�����������, ����������� ����������� ���������� ����� � ��������� ����������� ��������.
    float Testing();
    //void Display_Test();//�������� ������� ����������� �������. ��� ������������� �������� ���������� ���������� ������� ���������� ������������. 
    float heating_rate(int M, int V);//�������� �������
    float rate_of_cooling(int Tour, float Teng);//�������� ����������
};

