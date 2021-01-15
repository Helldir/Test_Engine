#include "../include/Internal_Combustion_Engine.h"

Internal_Combustion_Engine::Internal_Combustion_Engine() {
	I = 10;
	M = { 20, 75, 100, 105, 75, 0 };
	V = { 0, 75, 150, 200, 250, 300 };
	T = 110;
	Hm = 0.01f;
	Hv = 0.0001f;
	C = 0.1f;
}

Internal_Combustion_Engine::Internal_Combustion_Engine(ifstream& f)
{
	//принимает файл, записывает данные в буфер и сохран€юит параметры.
	vector<char> str;
	istream_iterator<char> isiter(f);
	istream_iterator<char> end_of_stream;
	copy(isiter, end_of_stream, back_inserter(str));
	f.close();
	vector<char>::iterator zerg = str.begin();
	string buff;
	for(zerg; zerg != str.end(); zerg++)
	{
		switch (*zerg) {
			case 'I':
				for (zerg; *zerg != ';'; zerg++) {
					if (isdigit(*zerg)) {
						buff += *zerg;
					}
				}
				I = stoi(buff);
				buff.clear();
				break;
			case 'M':
				for (zerg; *zerg != ';'; zerg++) {
					for (zerg; *zerg != ',' && *zerg != '}'; zerg++) {
						if (isdigit(*zerg)) {
							buff += *zerg;
						}
					}
					M.push_back(stoi(buff));
					buff.clear();
				}
				break;
			case 'T':
				for (zerg; *zerg != ';'; zerg++) {
					if (isdigit(*zerg)) {
						buff += *zerg;
					}
				}
				T = stoi(buff);
				buff.clear();
				break;
			case 'V':
				for (zerg; *zerg != ';'; zerg++) {
					for (zerg; *zerg != ',' && *zerg != '}'; zerg++) {
						if (isdigit(*zerg)) {
							buff += *zerg;
						}
					}
					V.push_back(stoi(buff));
					buff.clear();
				}
				break;
			case 'm':
				for (zerg; *zerg != ';'; zerg++) {
					if (isdigit(*zerg) || *zerg == ',') {
						buff += *zerg;
					}
				}
				Hm = stof(buff);
				buff.clear();
				break;
			case 'v':
				for (zerg; *zerg != ';'; zerg++) {
					if (isdigit(*zerg) || *zerg == ',') {
						buff += *zerg;
					}
				}
				Hv = stof(buff);
				buff.clear();
				break;
			case 'C':
				for (zerg; *zerg != ';'; zerg++) {
					if (isdigit(*zerg) || *zerg == ',') {
						buff += *zerg;
					}
				}
				C = stof(buff);
				buff.clear();
				break;
			default:
				break;
		}
		
	}
}

float const Internal_Combustion_Engine::getHv()
{
	return Hv;
}

float const Internal_Combustion_Engine::getHm()
{
	return Hm;
}

float const Internal_Combustion_Engine::getC()
{
	return C;
}

float Internal_Combustion_Engine::acceleration(int Ma)
{
	float a;
	a = Ma / I;
	return a;
}

