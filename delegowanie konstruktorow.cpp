// Delegowanie konstruktorow

#include<iostream>
using namespace std;

class Prostokat{
private:
	double bok1;
	double bok2;
	string kolor;
public:
	Prostokat();
	Prostokat(double,double);
	
	void wyswietlDane();
	void ustawKolor(string);
};
Prostokat::Prostokat(){
	cout<<"komunikat kontrolny komnstruktora domyslnego"<<endl;
	ustawKolor("Bialy");           //ustalenie wartosci domyslnej zmiennej 'kolor' 
}
Prostokat::Prostokat(double pbok1,double pbok2){
	cout<<"komunikat kontrolny komnstruktora parametrynczego"<<endl;
	bok1=pbok1;
	bok2=pbok2;
	ustawKolor("Bialy");
}

void Prostokat::wyswietlDane(){
	cout<<"bok1:"<<bok1<<endl;
	cout<<"bok2:"<<bok2<<endl;
	cout<<"kolor:"<<kolor<<endl;
}

void Prostokat::ustawKolor(string pkolor){
	kolor=pkolor;
}

int main(){
	Prostokat p1;
	p1.wyswietlDane();
	cout<<endl;
	
	Prostokat p2(2,3);
	p2.wyswietlDane();
	
	p2.ustawKolor("Czarny");  //,modyfikacja wartosci domyslnej
	
	p2.wyswietlDane();
	
	return 0;
}
