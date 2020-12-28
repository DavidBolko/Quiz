// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

void WriteToFile(int financie, string name) {

	string metal;
	if (financie == 5000)
	{
		metal += "Platinum";
	}
	if (financie < 5000 && financie > 2500)
	{
		metal += "Gold";
	}
	if (financie < 2500 && financie > 1500)
	{
		metal += "Silver";
	}
	if (financie < 1500 && financie > 500)
	{
		metal += "Bronze";
	}
	if (financie < 500 && financie > 10)
	{
		metal += "Copper";
	}
	if (financie < 10 && financie > 0)
	{
		metal += "Potato";
	}



	ofstream myfile;
	myfile.open("zoznamhracov.txt", ios_base::app);
	myfile << name << '\t' << financie << '\t' << metal <<endl;
	myfile.close();
}