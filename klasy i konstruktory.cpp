//inicjalizacja danych wewnetrznych

#include<iostream>
using namespace std;

class Pracownik{
	public:
		int id=1001;                     //inicjalizator wewntrz.kl.
		string imie="Wac³aw";            //inicjalizator wewntrz.kl.
		string nazwisko="Nowak";         //inicjalizator wewntrz.kl.
		
		Pracownik();     //prototyp konstruktora domslengo
		
		//prototyp konstruktora parametrycznego
		Pracownik(int, string, string);
		
		
		//Prototyp zmiennej(funkcji):
		void wyswietlDane();
};
//Definicja konstruktorow

Pracownik::Pracownik(){
	cout<<"Komunikat kontrolny - wywo³anie konstruktora domyslnego"<<endl;
}

Pracownik::Pracownik(int pid,string pimie, string pnazwisko){
	id=pid;
	imie=pimie;
	nazwisko=pnazwisko;
}

void Pracownik::wyswietlDane(){
	cout<<"id"<<id<<endl;
	cout<<"imie"<<imie<<endl;
	cout<<"nazwisko"<<nazwisko<<endl;
}
int main()
{
	Pracownik pracownik;
	
	pracownik.wyswietlDane();
	
	return 0;
}
