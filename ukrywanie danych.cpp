//akcesory(accessors) - to metody publiczne umozliwiajace dostep do zmiennych prywatnych na poziomie
//                      otoczenia zewnetrznego klasy

//settery - publiczna metoda dostepowa, ktora umozliwia NADANIE i ZMIANE wartosci prywatnej zmiennej 

//gettery - metoda publiczna, ktora umozliwia wylacznie POBRANIE wartosci zmiennej prywatnej klasy 

#include<iostream>
using namespace std;

class Prostokat{
private: 
	double bok1 {0};
	double bok2 {0};
	
public:
	Prostokat();
	Prostokat(double, double);
	
	//definicje publiczych prototypow metod dostepowych - akcesrow:
	
	void setBok1(double); //setter zmiennej bok1
	double getBok1();     //getter zmiennej bok1
	void setBok2(double); //setter zmiennej bok2
	double getBok2();     //getter zmiennej bok2
};

Prostokat::Prostokat(){}
Prostokat::Prostokat(double pbok1, double pbok2){
	bok1=pbok1;
	bok2=pbok2;
}

//definiujemy szczegolowe akcesory - gettery i settery:

void Prostokat::setBok1(double pbok1){
	bok1=pbok1;
}
void Prostokat::setBok2(double pbok2){
	bok2=pbok2;
}

double Prostokat::getBok1(){
	return bok1;
}

double Prostokat::getBok2(){
	return bok2;
}

int main(){
	double dlugosc=2;
	double szerokosc=3;
	
	Prostokat prostokat;
	
	prostokat.setBok1(dlugosc);
	prostokat.setBok2(szerokosc);
	
	cout<<"Dlugosc bokow: "<<endl;

	cout<<"Pierwszy bok = "<<prostokat.getBok1()<<endl;
	cout<<"Drugi bok = "<<prostokat.getBok2()<<endl;
	
	return 0;
}
