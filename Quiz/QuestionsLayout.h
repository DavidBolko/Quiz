#ifndef QuestionsLayout_H
#define QuestionsLayout_H

#include <string>
using namespace std;

class QuestionsLayout
{
public:
    string questionName; //obsah otazky samotnej
    char corans; //spravna odpoved 
    string ans1; //prva odpoved 
    string ans2; //druha odpoved
    string ans3; //tretia odpoved
    string ans4; //stvrta odpoved
    
    //constructor
    QuestionsLayout(string questionname, char corAns, string Ans1, string Ans2, string Ans3, string Ans4);

};



#endif // !Questions_H
