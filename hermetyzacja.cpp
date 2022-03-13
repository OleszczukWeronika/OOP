//hermetyzacja danych

#include<iostream>
using namespace std;

class Prostokat{
	public: 
	double bok1 {0};
	double bok2 {0};
	
	Prostokat();
	Prostokat(double,double);
	
	void wyswietlBoki();
};

Prostokat::Prostokat(){}
Prostokat::Prostokat(double pbok1, double pbok2){
	bok1=pbok1;
	bok2=pbok2;
	
	//powiazanie zmiennnych (danych) nastepuje juz na poziomie definicji prototypu juz w klasie Prostokat
	//-> to jest wlasnie hermetyzacja
}

//scisle powiazanie poprzez hermetyzacje nastepnie po wywolaniu klasy i metody kal w przykladzie ponizej
void Prostokat::wyswietlBoki(){
	cout<<"Wywolanie metody wyswietlBoki()"<<endl;
	cout<<"Pierwszy bok = "<<bok1<<endl;
	cout<<"Drugi bok = "<<bok2<<endl;
}
//wywolanie funkcji zewnetrznej nie jest hermetyzacja poniewaz funkcja jest calkowicie niezalenza od klas 

void wyswietlBoki(double b1,double b2){
	cout<<"Wywolanie funkcji zewnetrznej wyswietlBoki()"<<endl;
	cout<<"Pierwszy bok = "<<b1<<endl;
	cout<<"Drugi bok = "<<b2<<endl;
}

int main(){
	double dlugosc=2;
	double szerokosc=3;
	
	wyswietlBoki(dlugosc, szerokosc);
	
	cout<<endl;
	
	Prostokat prostokat(3,4);
	
	prostokat.wyswietlBoki(); 
	
	return 0;
}
