#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float metry;
int g;

float ile_cali(float m)
{
	float cale = m*39.37;
	return cale;
}

float ile_jardow(float m)
{
	float jardy = m*1.09;
	return jardy;
}

float ile_mil(float m)
{
	float mila = m*0.00062;
	return mila;
}

int main(int argc, char** argv) {
	cout << "Wybierz na co chcesz przeliczyc metry:\n 1 Cale\n 2 Jardy\n 3 Mile\n";
	cin >> g;
	switch(g){
		case 1:
			cout << "Wprowadz liczbe metrow:\n";
			cin >> metry;
			cout << "Wynik: " << ile_cali(metry) << endl;
			break;
		case 2:
			cout << "Wprowadz liczbe metrow:\n";
			cin >> metry;
			cout << "Wynik: " << ile_jardow(metry) << endl;
			break;
		case 3:
			cout << "Wprowadz liczbe metrow:\n";
			cin >> metry;
			cout << "Wynik: " << ile_mil(metry) << endl;
			break;
	}
	return 0;
}
