
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdio>
#include <clocale>
#include<fstream>
#include <string>

using namespace std;


void QuizzGame()
{
    float financie = 0;
    string name;

    cout << "Zadaj svoje Meno: ";
    cin >> name;
    system("CLS");


    //KOLO 1 ZACIATOK HRY ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    cout << "-------------------KOLO 1.-------------------" << endl << endl;
    char answer;
    cout << "Ako sa nazyva najvacsie suchozemske zviera na svete?" << endl;
    cout << "Po 'A' Slon Africky" << endl;
    cout << "Po 'B' Vraskavec Obrovsky" << endl;
    cout << "Po 'C' Zirafa" << endl;
    cout << "Po 'D' Pstros dvojprsty" << endl << endl;
    cout << "Zadaj Odpoved: ";


    bool again = true;
    while (again) {
        cin >> answer;

        switch (answer)
        {
        case 'A':
            cout << "Vyborne, spravna odpoved" << endl;
            financie += 100;
            cout << "Vase nove skore: " << financie << endl;
            again = false;

            break;
        case 'B':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;

        case 'C':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;

        case 'D':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;

        default:
            cout << "Nezadali ste 1 zo 4 odpovedi" << endl;
            cout << "Zadajte Odpoved Znova: " << endl;
            bool again = true;
            break;






        }

    }


    //Zápis mena a poèet financí a stupeò výhry do súboru.
    ofstream MyFile("zoznamhracov.txt", std::ios_base::app);
    MyFile << name << "    " << financie << "Bodov" << endl;
    MyFile.close();


    //LOADING a VYMAZANIE KONZOLE
    cout << endl << endl << endl;
    cout << "LOADING KOLO2 ";
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(0.3s);
        cout << "-";


    }
    system("CLS");

    cout << "Meno Hráèa: " << name << endl;
    cout << "Vase Body: " << financie << endl << endl;

    //KOLO 2 ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    cout << "-------------------KOLO 2.-------------------" << endl;
    cout << "Ako sa nazyva chemicky prvok He" << endl;
    cout << "Po 'A' Hafnium" << endl;
    cout << "Po 'B' Horcik" << endl;
    cout << "Po 'C' Helium" << endl;
    cout << "Po 'D' Hasium" << endl << endl;
    cout << "Zadaj Odpoved: ";
    again = true;

    while (again) {
        cin >> answer;
        switch (answer)
        {
        case 'A':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            financie -= 20;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;

            break;
        case 'B':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            financie -= 20;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;

        case 'C':
            cout << "Vyborne, spravna odpoved" << endl;
            financie += 100;
            cout << "Vase nove skore: " << financie << endl;
            again = false;
            break;

        case 'D':
            cout << "Zla odpoved, vela stastia v dalsej" << endl;
            cout << "Vase sucasne skore: " << financie << endl;
            financie -= 20;
            again = false;
            break;
            break;

        default:
            cout << "Nezadali ste 1 zo 4 odpovedi" << endl;
            cout << "Zadajte Odpoved Znova: " << endl;
            bool again = true;
            break;



        }


    }



    //LOADING a VYMAZANIE KONZOLE
    cout << endl << endl << endl;
    cout << "LOADING KOLO3 ";
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(0.3s);
        cout << "-";
    }
    system("CLS");


    cout << "Meno Hráèa: " << name << endl;;
    cout << "Vase Body: " << financie << endl << endl;



    //KOLO 3 ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    cout << "Kolo 3" << endl;
    cout << "Kolko cicavcov pozname na svete k roku 2006?" << endl;
    cout << "Zadaj Odpoved (tolerancia 10%): ";
    again = true;
    int answerinput;
    double tolerance = 0.1;

    while (again) {
        cin >> answerinput;
        cin.clear();              //to clear the buffer memory
        cin.ignore(numeric_limits<streamsize>::max(), '\n');



        switch (answerinput)
        {
        case 5416:
            cout << "Vyborne, spravna odpoved" << endl;
            cout << "Vase sucasne skore: " << financie << endl;
            again = false;
            break;
        default:
            if (answerinput != 5416)
            {

                float tolerancenumup = 5416 + (5416 * tolerance); //5957
                float tolerancenudown = 5416 - (5416 * tolerance); //4874

                int wronganswer;
                wronganswer = answerinput;

                if (wronganswer <= tolerancenumup && wronganswer > 5416) //všetky èisla menšie ako tolerancia nahor (5957) ale zaroven väèšie ako 5416(spravná odpoved)
                {
                    cout << "Gratulejeme tipol si blízko, dostávaš zníženy poèet financí";
                    financie += 60;
                    again = false;
                }
                else if (wronganswer >= tolerancenudown && wronganswer < 5416)//všetky èisla väèšie ako tolerancia nadol (4874) ale zaroven menšie ako 5416(spravná odpoved)
                {
                    cout << "Gratulejeme tipol si blízko, dostávaš zníženy poèet financí";
                    financie += 60;
                    again = false;

                }
                else
                {
                    cout << "Tipol si èíslo za požadovanou toleranciu, prajeme viac štastia v dalšej otázke";
                    again = false;
                    financie -= 20;
                }

            }
            else {
                cout << "Nezadal si správny vstup";
                again = true;
            }
            break;










        }


    }

    //LOADING a VYMAZANIE KONZOLE
    cout << endl << endl << endl;
    cout << "LOADING KOLO4 ";
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(0.3s);
        cout << "-";


    }
    system("CLS");

    cout << "Meno Hráèa: " << name << endl;
    cout << "Vase Body: " << financie << endl << endl;

    //KOLO 4 ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    srand(time_t(2));
    string znacky[4] = { "BMW", "Volkswagen","Ford", "Renault" };
    //BMW //VW //Ford //Renault
    //1916 //1937 //1903 //1898
    int randomvyber = rand() % 4;
    tolerance = 0.02f;

    cout << "-------------------KOLO 4.-------------------" << endl;
    cout << "V ktorom roku bola založená automobilka " << znacky[randomvyber] << endl;
    cout << "•1916" << endl;
    cout << "•1937" << endl;
    cout << "•1903" << endl;
    cout << "•1898" << endl << endl;
    cout << "Zadaj Odpoved: ";
    again = true;

    cout << randomvyber;

    while (again) {
        cin >> answer;
        switch (answer)
        {
        case '1916':
            if (randomvyber == 0) //tolerancia 10%
            {
                if (answer >= 1916 + (1916 * tolerance) && answer < 1916) //tolerancia 10%
                {
                    cout << "Vyborne, spravna odpoved" << endl;
                    financie = +100;
                    cout << "Vase nove skore: " << financie << endl;
                    again = false;

                }
            }
            else
            {
                cout << "Zla odpoved, vela stastia v dalsej" << endl;
                cout << "Vase sucasne skore: " << financie << endl;
                again = false;


            }
            break;
        case '1937':
            if (randomvyber == 1) //tolerancia 10%
            {
                if (answer >= 1937 + (1937 * tolerance) && answer < 1937) //tolerancia 10%
                {
                    cout << "Vyborne, spravna odpoved" << endl;
                    financie = +100;
                    cout << "Vase nove skore: " << financie << endl;
                    again = false;

                }
            }
            else
            {
                cout << "Zla odpoved, vela stastia v dalsej" << endl;
                cout << "Vase sucasne skore: " << financie << endl;
                again = false;


            }
            break;
        case '1903':
            if (randomvyber == 2) //tolerancia 10%
            {
                if (answer >= 1903 + (1903 * tolerance) && answer < 1903) //tolerancia 10%
                {
                    cout << "Vyborne, spravna odpoved" << endl;
                    financie = +100;
                    cout << "Vase nove skore: " << financie << endl;
                    again = false;

                }
            }
            else
            {
                cout << "Zla odpoved, vela stastia v dalsej" << endl;
                cout << "Vase sucasne skore: " << financie << endl;
                again = false;


            }
            break;
        case '1898':
            if (randomvyber == 3) //tolerancia 10%
            {
                if (answer >= 1898 + (1898 * tolerance) && answer < 1898) //tolerancia 10%
                {
                    cout << "Vyborne, spravna odpoved" << endl;
                    financie = +100;
                    cout << "Vase nove skore: " << financie << endl;
                    again = false;

                }
            }
            else
            {
                cout << "Zla odpoved, vela stastia v dalsej" << endl;
                cout << "Vase sucasne skore: " << financie << endl;
                again = false;


            }
            break;

        default:
            cout << "Nezadali ste 1 zo 4 odpovedi" << endl;
            cout << "Zadajte Odpoved Znova: " << endl;
            bool again = true;
            break;



        }



    }


    //LOADING a VYMAZANIE KONZOLE
    cout << endl << endl << endl;
    cout << "LOADING KOLO5 ";
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(0.3s);
        cout << "-";


    }
    system("CLS");

    cout << "Meno Hráèa: " << name << endl;
    cout << "Vase Body: " << financie << endl << endl;

    //Otazka 10 ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------









   
}



