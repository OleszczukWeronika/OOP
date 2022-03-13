#include <iostream>

using namespace std;

class Egzamin
{
private:
	int tablica[10];
	int szukaj_max(int pocz, int kon);
	
public:
	void wczytaj_tablice();
	void wyswietl_tablice();
	void sortowanie_tablicy();
};

int Egzamin::szukaj_max(int pocz, int kon)
{
	int nr, maks;
	
	nr=pocz;
	maks=tablica[nr];
	
	for (int i=pocz+1; i<kon; i++)
	{
		if(maks<tablica[i])
		{
			maks=tablica[i];
			nr=i;
		}
	}
	return nr;
}

void Egzamin::wczytaj_tablice()
{
	for (int i=0; i<10; i++)
	{
		cout << "["<<i<<"] = ";
		cin >> tablica[i];
	}
}

void Egzamin::wyswietl_tablice()
{
	for (int i=0; i<10; i++)
	cout<<tablica[i] << " ";

}

void Egzamin::sortowanie_tablicy()
{
	//cout << szukaj_max(0,10);
	
	for (int i=0; i<10; i++)
	{
		int indeks_maks=szukaj_max(i,10);
		//tablica[i] <==> tablica[indeks_maks];
		swap(tablica[i],tablica[indeks_maks]); //zamienia dane
	}
}

int main() 
{
	Egzamin zadanie;
	zadanie.wczytaj_tablice();
	cout << "Dane przed sortowaniem " << endl;
	zadanie.wyswietl_tablice();
	
	cout<< "\nDane po sortowaniu " << endl;
	zadanie.sortowanie_tablicy();
	zadanie.wyswietl_tablice();
	return 0;
}
