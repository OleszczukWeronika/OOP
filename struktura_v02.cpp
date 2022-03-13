#include<iostream>
using namespace std;

struct Data{
	int dd,mm,rr;
};

class Pracownik{
	public:
		int id {1};
		string imie {"Jan"},nazwisko {"Kowalski"};
		Data data_urodzenia {01,01,1899};
};

int main(){
	Pracownik pracownik; //wywolanie konstruktora niejawnego z inicjalizacja pól wartoœciami
	
	cout<<"numer identyfikacyjny: "<<pracownik.id<<endl;
	//...

	return 0;
}
