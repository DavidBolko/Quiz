#include <iostream>
#include "Header.h"
#include <conio.h>
#include <clocale>


using namespace std;

void Rules()
{
	std::setlocale(LC_ALL, "");
	cout << "------------------------PRAVIDLA----------------------" << endl;
	cout << "     Za ka�du spravn� odpoved je odmena 500�" << endl;
	cout << "Ale za ka�du nespr�vnu odpoved sa v�m z u�tu zobere 350�" << endl;
	cout << "Mus�te odpoveda� jednou zo �tyroch predom ur�en�ch odpoved�" << endl;
	cout << "Na konci sa tvoje peniaze s��taju a dost�v� obsadenie:" << endl;
	cout << "Platinum: 5000" << endl;
	cout << "Gold: 4999 - 2500" << endl;
	cout << "Silver: 2499 - 1500" << endl;
	cout << "Bronze: 1499 - 500" << endl;
	cout << "Copper: 499 - 10" << endl;
	cout << "Potato: 10 - 0" << endl;
	cout << "Vela Stastia" << endl;
	cout << "-----------Pre n�vrat stla�te ak�kolvek znak------------" << endl;

	_getch();
	main();
	
}