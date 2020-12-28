
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdio>
#include <clocale>
#include <conio.h>
#include<fstream>
#include <string>
#include<ctime>
#include "Header.h"
#include "QuestionsLayout.h"

using namespace std;



void QuizzGame()
{
    std::setlocale(LC_ALL, "");

    srand((unsigned)time(0));
    //random cisla sa zapisu do pola Asked[] bez opakovania
    int asked[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for (int i = 0; i < 10; i++)
    {
        label:
        int result = (1+rand() % 10);
        for (int j = 0; j < 10; j++)
        {
            if (asked[j] == result) {
                goto label;
            }
        }

        asked[i] = result;
    }


    //Otazky a odpovede (prepisatelne)
    QuestionsLayout q1("Co je najvacsie vo vesmire?", 'A', "A - Slnko", "B - Jupiter", "C - Merkúr", "D - Pluto");
    QuestionsLayout q2("Aku znacku ma Helium v Periodickej Tabulke Prvkov?", 'C', "A - Hc", "B - Ha", "C - He", "D - H");
    QuestionsLayout q3("Kolko druhov cicavcov pozname?", 'D', "A - 5256", "B - 3586", "C - 8235", "D - 5416");
    QuestionsLayout q4("Ako sa volá Majitel Spoloènosti SpaceX?", 'D', "A - James Bond ", "B - Adolf Hitler ", "C - Bill Gates", "D - Elon Musk");
    QuestionsLayout q5("Kolko Štátov je v Europskej únií?", 'B', "A - 25", "B - 27", "C - 32", "D - 40");
    QuestionsLayout q6("Èim sa preslavil Albert Einstein?", 'B', "A - Objavil Gravitaciu", "B - Teóriou Relativity", "C - Objavil všetky chemické prvky", "D - Vynašiel prvý elektrický motor");
    QuestionsLayout q7("Ktora planeta je najväèšia v slneènej sústave?", 'C', "A - Slnko", "B - Merkúr", "C - Jupiter", "D - Zem");
    QuestionsLayout q8("Kto predal prvý komerèný automobil?", 'D', "A - Karl Rahner", "B - Karl Marx", "C - Karl Fabergé", "D - Karl Benz");
    QuestionsLayout q9("Japonsko je jedna z najviac geologicky a meteorologicky aktívnych zón, Ktore tvrdenie je pravdive?", 'D', "A - Viac ako 200 krát zažijú Tsunami", "B - Viac ako 150 krát uvidia tornado", "C - Vybuchne zhruba 800 sopiek", "D - Zhruba 1500 Zemetrasení Roène");
    QuestionsLayout q10("Dá sa cestova v èase?", 'C', "A - Nie nedá, iba vo filme", "B - Ano dá elektrickými impulzmi", "C - Ano dá, super Rýchlou cestou vesmírom", "D - Nezmysel ");

    int financie = 0;
    int count = 1;
    string name;

    cout << "Zadaj svoje Meno: ";
    cin >> name;


    //---------------Zaciatok Hry------------------
    for(int i : asked)
    {
        if (count > 1)
        {
            //LOADING a VYMAZANIE KONZOLE
            cout << endl;
            cout << "LOADING" << endl;
            for (int i = 0; i < 5; i++)
            {
                std::this_thread::sleep_for(0.3s);
                cout << "-";
            }
        }
        system("CLS");

        cout << "Otazka " << count << endl;
        cout << "Meno Hráèa: " << name << endl;
        cout << "Vase Body: " << financie << endl << endl;

        if (i == 1)
        {
            cout << q1.questionName << endl;
            cout << q1.ans1 << endl;
            cout << q1.ans2 << endl;
            cout << q1.ans3 << endl;
            cout << q1.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q1.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€"<< endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }
            }


        }

        if (i == 2)
        {
            cout << q2.questionName << endl;
            cout << q2.ans1 << endl;
            cout << q2.ans2 << endl;
            cout << q2.ans3 << endl;
            cout << q2.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q2.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }
            }


        }
        if (i == 3)
        {
            cout << q3.questionName << endl;
            cout << q3.ans1 << endl;
            cout << q3.ans2 << endl;
            cout << q3.ans3 << endl;
            cout << q3.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q3.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 4)
        {
            cout << q4.questionName << endl;
            cout << q4.ans1 << endl;
            cout << q4.ans2 << endl;
            cout << q4.ans3 << endl;
            cout << q4.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q4.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 5)
        {
            cout << q5.questionName << endl;
            cout << q5.ans1 << endl;
            cout << q5.ans2 << endl;
            cout << q5.ans3 << endl;
            cout << q5.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q5.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 6)
        {
            cout << q6.questionName << endl;
            cout << q6.ans1 << endl;
            cout << q6.ans2 << endl;
            cout << q6.ans3 << endl;
            cout << q6.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q6.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 7)
        {
            cout << q7.questionName << endl;
            cout << q7.ans1 << endl;
            cout << q7.ans2 << endl;
            cout << q7.ans3 << endl;
            cout << q7.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q7.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 8)
        {
            cout << q8.questionName << endl;
            cout << q8.ans1 << endl;
            cout << q8.ans2 << endl;
            cout << q8.ans3 << endl;
            cout << q8.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q8.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 9)
        {
            cout << q9.questionName << endl;
            cout << q9.ans1 << endl;
            cout << q9.ans2 << endl;
            cout << q9.ans3 << endl;
            cout << q9.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q9.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
        if (i == 10)
        {
            cout << q10.questionName << endl;
            cout << q10.ans1 << endl;
            cout << q10.ans2 << endl;
            cout << q10.ans3 << endl;
            cout << q10.ans4 << endl;
            cout << "Odpoved: ";

            char answer;
            bool again = true;

            while (again)
            {
                cin >> answer;
                if (answer == 'A' || answer == 'C' || answer == 'B' || answer == 'D')
                {
                    if (answer == q10.corans)
                    {
                        cout << "Spravna odpoved, dostavas 500€" << endl;
                        financie += 500;
                        count++;
                        again = false;
                    }
                    else
                    {
                        cout << "Nespravna Odpoved" << endl;
                        financie -= 350;
                        count++;
                        again = false;
                    }
                }
                else
                {
                    cout << "Nezadal si jednu zo styroch moznosti, skus to znova: ";
                    again = true;
                }

            }



        }
       

    }


    WriteToFile(financie, name);

    cout << endl <<endl;
    cout << "---------------Stiskni èokolvek na návrat do Menu---------------";


    _getch();
    main();

    

    





    



   
}



