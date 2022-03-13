#include<iostream>
using namespace std;

struct Data{
	int dd,mm,rr;
};

class Pracownik{
	public:
		int id;
		string imie,nazwisko;
		Data data_urodzenia;
};

int main(){
	Pracownik pracownik; //wywolanie konstruktora niejawnego
	
	cout<<"numer identyfikacyjny: "<<pracownik.id<<endl;
	//...

	return 0;
}
