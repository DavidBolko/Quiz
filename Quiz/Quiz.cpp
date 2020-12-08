// Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdio>
#include <clocale>
#include<fstream>
#include <string>
#include "Header.h"

using namespace std;


int main()
{
    system("mode 900");
    std::setlocale(LC_ALL, "");

    int zoznamhracov();

    cout << "___________________________________________________________________" << endl << endl;
    cout << "                                MILIONÁR" << endl;
    cout << "                              Vítaj v Hre" << endl;
    cout << "___________________________________________________________________" << endl << endl;

    cout << "Zmaèkni P na spustenie Hry" << endl;
    cout << "Zmaèkni Z pre Zoznam Všetkých Hráèov" << endl;
    cout << "Zmaèkni Q na Ukonèenie Hry" << endl << endl;
    char choice;
    cin >> choice;

    switch (choice)
    {
    case 'P':
        system("CLS");
        QuizzGame();
        break;

    case 'Z':
        system("CLS");
        zoznamhracov();
        break;
    case 'Q':
        system("CLS");
        return 3;
        break;



    };

 





    return 0;
}




int zoznamhracov()
{
    string zoznam;
    ifstream MyFile("zoznamhracov.txt");
    while (getline(MyFile, zoznam))
    {
        cout << zoznam <<endl;

    }
  
 


    MyFile.close();

    return 0;

}


















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
