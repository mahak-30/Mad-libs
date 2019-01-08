#include <iostream>
#include <string.h>
#include <string>
#include <time.h>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main()
{
    char ch='y';
    cout<<"Welcome to mad-libs. Lets get started..."<<endl<<endl;
    do
    {
        int n;
        srand(time(NULL));
        n=rand()%5;
        cout<<endl<<endl;
        switch(n)
        {
            case 0:
                {
                  string boyname;
                  cout<<"Enter a boy's name"<<endl;
                  cin>>boyname;
                  string noun_1;
                  cout<<"Enter an noun"<<endl;
                  cin>>noun_1;
                  string occupation;
                  cout<<"Enter a occupation"<<endl;
                  cin>>occupation;
                  string measurement;
                  cout<<"Enter a measurement"<<endl;
                  cin>>measurement;
                  string noun_2;
                  cout<<"Enter a noun"<<endl;
                  cin>>noun_2;
                  string noun_3;
                  cout<<"Enter a noun"<<endl;
                  cin>>noun_3;
                  string adjective_1;
                  cout<<"Enter an adjective"<<endl;
                  cin>>adjective_1;
                  string game;
                  cout<<"Enter a game"<<endl;
                  cin>>game;
                  string adjective_2;
                  cout<<"Enter an adjective"<<endl;
                  cin>>adjective_2;
                  string plural_noun;
                  cout<<"Enter a plural noun"<<endl;
                  cin>>plural_noun;
                  string verb_ing;
                  cout<<"Enter a verb ending with -ing"<<endl;
                  cin>>verb_ing;
                  cout<<endl<<endl;
                  cout<<"Lets see the story"<<endl<<endl;
                  cout<<boyname<<" Potter and the Socerer's stone"<<endl<<endl;
                  cout<<"On his 11th birthday, young "<<boyname<<" Potter discovered the "<<noun_1<<" he never had, the "<<noun_1<<" of a "<<occupation<<". ";
                  cout<<"In his first "<<measurement<<" at Hogwarts school of "<<noun_2<<" and "<<noun_3<<", he meets his two "<<adjective_1<<" friends, Ron Weasley, an expert at wizard "<<game<<", and Hermione Granger, a girl with "<<adjective_2<<" parents.";
                  cout<<boyname<<" learns the game of quidditch and wizard "<<game<<" on his way to facing a dark "<<plural_noun<<" teacher who is bent on "<<verb_ing<<" him."<<endl<<endl;
                  break;
                }
            case 1:
                {
                 string boyname_1;
                 cout<<"Enter a boy's name"<<endl;
                 cin>>boyname_1;
                 string noun_1;
                 cout<<"Enter a noun"<<endl;
                 cin>>noun_1;
                 string noun_2;
                 cout<<"Enter a noun"<<endl;
                 cin>>noun_2;
                 string color;
                 cout<<"Enter a color"<<endl;
                 cin>>color;
                 string noun_3;
                 cout<<"Enter a noun"<<endl;
                 cin>>noun_3;
                 string adjective_1;
                 cout<<"Enter an adjective"<<endl;
                 cin>>adjective_1;
                 string adjective_2;
                 cout<<"Enter an adjective"<<endl;
                 cin>>adjective_2;
                 string name_2;
                 cout<<"Enter a name"<<endl;
                 cin>>name_2;
                 string name_3;
                 cout<<"Enter a name"<<endl;
                 cin>>name_3;
                 string adjective_3;
                 cout<<"Enter an adjective"<<endl;
                 cin>>adjective_3;
                 string adjective_4;
                 cout<<"Enter an adjective"<<endl;
                 cin>>adjective_4;
                 cout<<endl<<endl;
                 cout<<"Lets see the story"<<endl<<endl;
                 cout<<boyname_1<<" Potter and the Prisoner of Azkaban"<<endl;
                 cout<<"When "<<boyname_1<<" Potter starts his 3rd year at Hogwarts "<<noun_1<<" of Witchcraft and "<<noun_2<<", he finds out a prisoner named Sirius "<<color<<" had escaped from Azkaban and is on the loose. ";
                 cout<<"Dementors are called to defend the "<<noun_3<<", amd a "<<adjective_1<<" Defence Against the "<<adjective_2<<" Arts teacher is called named Professor "<<name_2<<". ";
                 cout<<"His friends "<<name_3<<" Weasley and Hermione Granger are back and are surprised to find that Hagrid is now teaching Care of "<<adjective_3<<" Creatures. ";
                 cout<<"But when the students find that Sirius is in the school, "<<adjective_4<<" things happen."<<endl<<endl;
                 break;
                }
            case 2:
                {
                    string adjective_1;
                    cout<<"Enter an adjective"<<endl;
                    cin>>adjective_1;
                    string nationality;
                    cout<<"Enter a nationality"<<endl;
                    cin>>nationality;
                    string name;
                    cout<<"Enter a name"<<endl;
                    cin>>name;
                    string noun_1;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_1;
                    string adjective_2;
                    cout<<"Enter an adjective"<<endl;
                    cin>>adjective_2;
                    string noun_2;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_2;
                    string adjective_3;
                    cout<<"Enter an adjective"<<endl;
                    cin>>adjective_3;
                    string adjective_4;
                    cout<<"Enter an adjective"<<endl;
                    cin>>adjective_4;
                    string plural_noun;
                    cout<<"Enter a plural noun"<<endl;
                    cin>>plural_noun;
                    string noun_3;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_3;
                    string number_1;
                    cout<<"Enter a number"<<endl;
                    cin>>number_1;
                    string shapes;
                    cout<<"Enter a plural shape"<<endl;
                    cin>>shapes;
                    string food_1;
                    cout<<"Enter a food"<<endl;
                    cin>>food_1;
                    string food_2;
                    cout<<"Enter a food"<<endl;
                    cin>>food_2;
                    string number_2;
                    cout<<"Enter a number"<<endl;
                    cin>>number_2;
                    cout<<endl<<endl;
                    cout<<"Lets see the story"<<endl<<endl;
                    cout<<"Pizza & Pizza"<<endl;
                    cout<<"Pizza was invented by "<<adjective_1<<" "<<nationality<<" chef named "<<name<<". ";
                    cout<<"To make a pizza, you need a lump of "<<noun_1<<", and make a thin round "<<adjective_2<<" "<<noun_2<<". ";
                    cout<<"Then you cover it with "<<adjective_3<<" sauce, "<<adjective_4<<" cheese, and freshed chopped "<<plural_noun<<". ";
                    cout<<"Next you have to bake it in a very hot "<<noun_3<<". ";
                    cout<<"When it is done, cut it into "<<number_1<<" "<<shapes<<". ";
                    cout<<"Some kids like "<<food_1<<" pizza the best, but my favourite is "<<food_2<<" pizza. ";
                    cout<<"If I could, I would eat pizza "<<number_2<<" times a day!"<<endl<<endl;
                    break;
                }
            case 3:
                {
                    string name_1;
                    cout<<"Enter a name"<<endl;
                    cin>>name_1;
                    string verb_1;
                    cout<<"Enter a verb"<<endl;
                    cin>>verb_1;
                    string noun_1;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_1;
                    string emotion_1;
                    cout<<"Enter an emotion"<<endl;
                    cin>>emotion_1;
                    string noun_2;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_2;
                    string emotion_est;
                    cout<<"Enter a emotion+est"<<endl;
                    cin>>emotion_est;
                    string noun_3;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_3;
                    string verb_2;
                    cout<<"Enter a verb"<<endl;
                    cin>>verb_2;
                    string emotion_2;
                    cout<<"Enter an emotion"<<endl;
                    cin>>emotion_2;
                    string verb_3;
                    cout<<"Enter a verb"<<endl;
                    cin>>verb_3;
                    string verb_4;
                    cout<<"Enter a verb"<<endl;
                    cin>>verb_4;
                    string noun_4;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_4;
                    string noun_5;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_5;
                    string name_2;
                    cout<<"Enter a name"<<endl;
                    cin>>name_2;
                    cout<<endl<<endl;
                    cout<<"Lets see the story"<<endl<<endl;
                    cout<<"A Bride's Vows"<<endl;
                    cout<<"My Dearest "<<name_1<<", "<<endl;
                    cout<<"I "<<verb_1<<" you with all my "<<noun_1<<". ";
                    cout<<"I feel so "<<emotion_1<<" to be marrying you today. ";
                    cout<<"The first time I saw your "<<noun_2<<", I knew I could love you forever. ";
                    cout<<"I am the "<<emotion_est<<" woman alive to be your "<<noun_3<<". ";
                    cout<<"You always know just what to "<<verb_2<<" to me when I am feeling "<<emotion_2<<". ";
                    cout<<"Today I vow to always "<<verb_3<<" you and "<<verb_4<<" you no matter what. ";
                    cout<<"I cannot wait to spend rest of my "<<noun_4<<" with you. ";
                    cout<<"You truly mean the "<<noun_5<<" to me. "<<endl;
                    cout<<"Love always,"<<endl;
                    cout<<"Your "<<name_2<<endl<<endl;
                    break;
                }
            case 4:
                {
                    string adjective_1;
                    cout<<"Enter a adjective"<<endl;
                    cin>>adjective_1;
                    string pluralnoun_1;
                    cout<<"Enter a plural noun"<<endl;
                    cin>>pluralnoun_1;
                    string verbing_1;
                    cout<<"Enter a verb ending with -ing"<<endl;
                    cin>>verbing_1;
                    string pluralnoun_2;
                    cout<<"Enter a plural noun"<<endl;
                    cin>>pluralnoun_2;
                    string celebrity;
                    cout<<"Enter a celebrity"<<endl;
                    cin>>celebrity;
                    string name_1;
                    cout<<"Enter the name of person in the room currently"<<endl;
                    cin>>name_1;
                    string silly_1;
                    cout<<"Enter a silly word"<<endl;
                    cin>>silly_1;
                    string verb_1;
                    cout<<"Enter verb"<<endl;
                    cin>>verb_1;
                    string food_1;
                    cout<<"Enter a type of food(plural)"<<endl;
                    cin>>food_1;
                    string noun_1;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_1;
                    string adjective_2;
                    cout<<"Enter a adjective"<<endl;
                    cin>>adjective_2;
                    string adjective_3;
                    cout<<"Enter a adjective"<<endl;
                    cin>>adjective_3;
                    string shoe;
                    cout<<"Enter a type of shoe"<<endl;
                    cin>>shoe;
                    string noun_2;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_2;
                    string noun_3;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_3;
                    string verbing_2;
                    cout<<"Enter a verb ending with -ing"<<endl;
                    cin>>verbing_2;
                    string noun_4;
                    cout<<"Enter a noun"<<endl;
                    cin>>noun_4;
                    string silly_2;
                    cout<<"Enter a silly word"<<endl;
                    cin>>silly_2;
                    cout<<endl<<endl;
                    cout<<"Lets see the story"<<endl<<endl;
                    cout<<"Party Time!"<<endl;
                    cout<<"One of the most "<<adjective_1<<" things about graduating is that my "<<pluralnoun_1<<" are "<<verbing_1<<" a huge party! ";
                    cout<<"I decided to have a backyard barbeque for all of my family and "<<pluralnoun_2<<". ";
                    cout<<"I've invited my best friends "<<celebrity<<", "<<name_1<<" and ofcourse my teacher Mrs. "<<silly_1<<". ";
                    cout<<"My dad is going to "<<verb_1<<" hamburgers and "<<food_1<<" on his shiny new "<<noun_1<<". ";
                    cout<<"He always thinks his "<<food_1<<" taste really "<<adjective_2<<", but I think they taste like "<<adjective_3<<" "<<shoe<<". ";
                    cout<<"My mom is going to make her famous "<<noun_2<<" salad, which is my favourite "<<noun_3<<" ever! ";
                    cout<<"Mom said after we finish "<<verbing_2<<", we can go swimming in our new "<<noun_4<<" "<<silly_2<<"!"<<endl<<endl;
                    break;
                }
        }
        cout<<endl<<endl<<"Wasn't that exciting?? Wanna do it again?? Enter y for yes and n for no"<<endl;
        cin>>ch;
    }
    while((ch=='y')||(ch=='Y'));
    return 0;
}
