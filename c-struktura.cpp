#include <iostream>
#include <string>

using namespace std;

struct Data{
    unsigned short int dd,mm,rr;
};

struct Pracownik{
  char imie[20];
  char nazwisko[20];
  char stanowisko[30];
  Data data_zatrudnienia;  
};

int main(){
    Pracownik pracownik1={"Jan","Kowalski","dyrektor",{28,9,2021}};

    cout<<pracownik1.imie<<endl;
    cout<<pracownik1.nazwisko<<endl;
    cout<<pracownik1.stanowisko<<endl;
    cout<<pracownik1.data_zatrudnienia.dd<<" ";
    cout<<pracownik1.data_zatrudnienia.mm<<" ";
    cout<<pracownik1.data_zatrudnienia.rr<<endl;

    return 0;
}

//zmodyfikowac c-strukture aby zainicjowac typ strukturalny uczen oraz jego dane i oceny z przykladowych 3 przedmiotow (praca na plusa)