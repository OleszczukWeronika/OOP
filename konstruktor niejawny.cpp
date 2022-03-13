#include<iostream>
using namespace std;

//lista inicjalizacyjna danych zadeklarowanych niejawnie(nie publicznie)

class Pracownik{
		int id;                     
		string imie;            
		string nazwisko;        
	public:
		Pracownik();
		Pracownik(int, string, string);
		//Prototyp zmiennej(funkcji):
		void wyswietlDane();
};
Pracownik::Pracownik(){
	id=1599;
	imie="ktosiek";
	nazwisko="cosiek3";
}
Pracownik::Pracownik(int pid, string pimie, string pnazwisko){
	id=pid;
	imie=pimie;
	nazwisko=pnazwisko;
}
void Pracownik::wyswietlDane(){
	cout<<"id "<<id<<endl;
	cout<<"imie "<<imie<<endl;
	cout<<"nazwisko "<<nazwisko<<endl;
//	cout<<"data "<<d_zatrudnienia.dd<<"-"<<d_zatrudnienia.mm<<"-"<<d_zatrudnienia.rr<<endl;
}
int main()
{
//	Pracownik pracownik1={12344,"ktosiek","cosiek4"};
//	pracownik1.wyswietlDane();
	
	Pracownik pracownik2 {200,"ktosiek","cosiek5"};
	pracownik2.wyswietlDane();
	return 0;
}
