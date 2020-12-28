#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdio>
#include <clocale>
#include<fstream>
#include <string>
#include <conio.h>
#include "Header.h"

using namespace std;


int main()
{
    std::setlocale(LC_ALL, "");

    void zoznamhracov();

    cout << "+-----------------------------------------------------------------+" << endl;
    cout << "|                                KVIZ                             |" << endl;
    cout << "|                             Vítaj v Hre                         |" << endl;
    cout << "+-----------------------------------------------------------------+" << endl << endl;

    cout << "Zmaèkni H na spustenie Hry" << endl;
    cout << "Zmaèkni P pre zobrazenie Pravidiel" << endl;
    cout << "Zmaèkni Z pre Zoznam Všetkých Hráèov" << endl;
    cout << "Zmaèkni Q na Ukonèenie Hry" << endl << endl;
    char choice;
    cin >> choice;

    switch (choice)
    {
    case 'H':
        system("CLS");
        QuizzGame();
        break;

    case 'P':
        system("CLS");
        Rules();
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




void zoznamhracov()
{
    string zoznam;
    ifstream MyFile("zoznamhracov.txt");
    while (getline(MyFile, zoznam))
    {
        cout << zoznam <<endl;

    }
    MyFile.close();

    cout << "---------------Stiskni èokolvek na návrat do Menu---------------";
    _getch();
    main();
   

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
