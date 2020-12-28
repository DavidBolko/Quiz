#include <iostream>
#include "Header.h"
#include <conio.h>
#include <clocale>


using namespace std;

void Rules()
{
	std::setlocale(LC_ALL, "");
	cout << "------------------------PRAVIDLA----------------------" << endl;
	cout << "     Za každu spravnú odpoved je odmena 500€" << endl;
	cout << "Ale za každu nesprávnu odpoved sa vám z uètu zobere 350€" << endl;
	cout << "Musíte odpoveda jednou zo štyroch predom urèených odpovedí" << endl;
	cout << "Na konci sa tvoje peniaze sèítaju a dostáváš obsadenie:" << endl;
	cout << "Platinum: 5000" << endl;
	cout << "Gold: 4999 - 2500" << endl;
	cout << "Silver: 2499 - 1500" << endl;
	cout << "Bronze: 1499 - 500" << endl;
	cout << "Copper: 499 - 10" << endl;
	cout << "Potato: 10 - 0" << endl;
	cout << "Vela Stastia" << endl;
	cout << "-----------Pre návrat stlaète akýkolvek znak------------" << endl;

	_getch();
	main();
	
}