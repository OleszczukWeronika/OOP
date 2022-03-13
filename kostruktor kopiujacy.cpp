//konstruktor kopiujacy

//nazwaKlasy (const nazwaKlasy *wzorzec);

#include <iostream>
using namespace std;

class Prostokat{
	private: 
		double bok1;
		double bok2;
	public:
		Prostokat();
		Prostokat(double, double);
		
		Prostokat(const Prostokat &);      //kostruktor kopiujacy jawny
		
		void pobierzBoki(double&, double&);
		void ustawBoki(double, double);
		
		double pole();
		double obwod();
};

Prostokat::Prostokat(){
	cout<<"Konstruktor domyslny dziala"<<endl;
}

Prostokat::Prostokat(double pbok1,double pbok2){
	cout<<"Konstruktor parametryczny dziala"<<endl;
	bok1=pbok1;
	bok2=pbok2;
}

//konstruktor kopiujacy
Prostokat::Prostokat(const Prostokat& wzorzec){
	cout<<"Konstruktor kopiujacy dziala"<<endl;
	bok1=wzorzec.bok1;
	bok2=wzorzec.bok2;
}

void Prostokat::pobierzBoki(double &pbok1, double &pbok2){
	pbok1=bok1;
	pbok2=bok2;
}

void Prostokat::ustawBoki(double pbok1, double pbok2){
	bok1=pbok1;
	bok2=pbok2;
}

double Prostokat::pole(){
	return bok1*bok2;
}

double Prostokat::obwod(){
	return bok1*2+bok2*2;
}

//definicja fukncji zewnetrznej niezaleznej od klasy Prostokat
Prostokat kopiujProstokat(Prostokat prostokat) {
	return prostokat;
}

//parametrem formalnym funkcji kopiujProstokat() jest obiekt klasy Prostokat, ktory jest przekazywany do fukncji przez wartosc. Dlatego tez na stosie podczas wywolywania funkcji zostanie wykonana kopia obiektu jako argumentutego wywolania
//funkcja zwraca na zewnatrz obkietu typu PRostokat. W tym samym czasie na stosie w trkacie wywaolywania tej funkcji ponownie zostanie wykonana kopia obiektu

int main(){
	//utworzenie obiektu wzorcowego :
	
	double b1,b2;     //zmienne pomocniczne
	cout<<"pierwszy prostokat"<<endl;

	Prostokat p1(3,4);    //wywolanie konstr. parametrycznego
	p1.pobierzBoki(b1,b2);
	cout<<"bok1 = "<<b1<<endl;
	cout<<"bok2 = "<<b2<<endl;
	cout<<endl;
	
	cout<<"Drugi prostkat: "<<endl;
	Prostokat p2=p1;     //utworzenie obiektu p2 na podstawie pobiektu p1
	
	p2.pobierzBoki(b1,b2);  //wywolanie konstruktora kopiojucego niejawnego
	cout<<"bok1 = "<<b1<<endl;
	cout<<"bok2 = "<<b2<<endl;
	cout<<endl;
	
	cout<<"trzeci prostokat"<<endl;
	Prostokat p3(p1);      //utworzenie  obiektu p3na podstawie obiektu p1
	p3.pobierzBoki(b1,b2);
	cout<<"bok1 = "<<b1<<endl;
	cout<<"bok2 = "<<b2<<endl;
	cout<<endl;
	
	cout<<"czwarty prostokat"<<endl;     
	Prostokat p4;     //utworzenie  obiektu p4
	p4=kopiujProstokat(p1);  //dwukrotne wywolanie kostruktora kopiujacego raz w funkcji kopiujprostokat i drugi raz podczas zwracania przez te funkcje obiektu 
	p4.pobierzBoki(b1,b2);
	cout<<"bok1 = "<<b1<<endl;
	cout<<"bok2 = "<<b2<<endl;
	cout<<endl;
	
	return 0;
}
