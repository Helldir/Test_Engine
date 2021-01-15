#include "..\include\Test_Overheat.h"


Test_Overheat::Test_Overheat(int T, Internal_Combustion_Engine * Eng)
{
	Temp = T;
	Dvig = Eng;
}

float Test_Overheat:: heating_rate(int Mheat, int Vheat)
{
	float Vh;
	Vh = (Mheat * Dvig->getHm()) + (((Vheat) * (Vheat)) * Dvig->getHv());
	return Vh;
}

float Test_Overheat::rate_of_cooling(int Tour, float Teng)
{
	float Vc;
	Vc = Dvig->getC() * (Tour - Teng);
	return Vc;
}

float Test_Overheat::Testing()
{
	vector <int>::iterator Miter = Dvig->M.begin();
	vector <int>::iterator Viter = Dvig->V.begin();
	Dvig->Temp_Engine = Temp;
	int Time = 0;
	int V = 0;
	while (Dvig->Temp_Engine <= Dvig->T && *Miter > 0)
	{
		while (V <= *Viter) {
			V += Dvig->acceleration(*Miter);
			Dvig->Temp_Engine += heating_rate(*Miter, V) + rate_of_cooling(Temp, Dvig->Temp_Engine);
			Time++;
			cout << "Время теста: " << Time << "c. " << "Температура двигателя: " << Dvig->Temp_Engine << endl;
		}
		Miter++;
		Viter++;
	}
	if (Dvig->Temp_Engine < Dvig->T) {
		cout << "Двигатель был разогнан до максимальных оборотов и не был не перегрет, температура двигателя: " << Dvig->Temp_Engine << endl;
	}
	else {
		cout << "Время до перегрева: " << Time << endl;
	}
	return Time;
}