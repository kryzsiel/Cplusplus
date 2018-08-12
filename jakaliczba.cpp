#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int liczba, strzal, ileprob=0;
int main()
{
    cout << "Pomyslalem liczbe od 1-100 zgadnij jaka to liczba" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;




    while(strzal!=liczba)
    {
        ileprob = ileprob+1;


cout << "Podaj liczbe ... To twoja "<<ileprob<<"proba" << endl;

cin>>strzal;
system( "cls" );



    if(strzal==liczba)
    cout<<endl<<endl<<"     ############################"<<endl<<"     ### Wygrales Zlote MAJTY ###"<<endl<<"     ############################"<<endl<<endl<<endl<<" UDALO CI SIE ZA  :"<<ileprob<<" razem "<<endl<<endl;

        else if(strzal<liczba)
cout<<endl<<endl<<"     ############################"<<endl<<"     ###### TO ZA MALO ######"<<endl<<"     ############################"<<endl<<endl<<endl;
            else if(strzal>liczba)
cout<<endl<<endl<<"     ############################"<<endl<<"     AAAAA TO ZA DUZO AAAAA"<<endl<<"     ############################"<<endl<<endl<<endl;



    }




    return 0;
}
