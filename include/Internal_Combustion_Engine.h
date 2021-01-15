#pragma once
#include "Engine.h"

class Internal_Combustion_Engine :
    public Engine
{
	private:
		int I;
		vector<int> M;
		int T;
		vector<int> V;
		float Hm;
		float Hv;
		float C;
	public:
		Internal_Combustion_Engine();
		Internal_Combustion_Engine(ifstream& f); //�����������, ����������� �� ���� �������� ���� � ������� ���������
		float acceleration(int M);//�����, �������������� ���������
		float const getHm();
		float const getHv();
		float const getC();
		friend class Test_Overheat;
};

