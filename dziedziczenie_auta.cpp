#include <iostream>

using namespace std;

class Auto
{
private:
	string marka;
	string model;
	int rok_produkcji;
public:
	Auto(){}
	Auto(string pmarka, string pmodel, int prok_produkcji)
	{
		marka = pmarka;
		model = pmodel;
		rok_produkcji = prok_produkcji;
	}
	
	void setmarka()
	{
		cin >> marka;
	}
	string getmarka()
	{
		return marka;
	}
	void setmodel()
	{
		cin >> model;
	}
	string getmodel()
	{
		return model;
	}
	void setRokProdukcji()
	{
		cin >> rok_produkcji;
	}
	int getRokProdukcji()
	{
		return rok_produkcji;
	}
};

class Ciezarowka : public Auto
{
private:
	string przeznaczenie;
public:
	Ciezarowka(){}
	Ciezarowka(string pprzeznaczenie, string pmarka, string pmodel, int prok_produkcji) : Auto(pmarka, pmodel, prok_produkcji)
	{
		przeznaczenie = pprzeznaczenie;
	}	
	
	void setprzeznaczenie() 
	{
		cin >> przeznaczenie;
	}
	string getprzeznaczenie()
	{
		return przeznaczenie;
	}
	void Wyswietl()
	{
		cout << "Oto twoja ciezarowka: " << endl;
		cout << "marka: " << getmarka() << endl;
		cout << "model: " << getmodel() << endl;
		cout << "rok produkcji: " << getRokProdukcji() << endl;
		cout << "przeznaczenie: " << getprzeznaczenie() << endl; 
	}
};

class Autobus : public Auto
{
private:
	int liczba_stojacych;	
	int liczba_siedzacych;
	
public:
	Autobus(){}
	Autobus(int pliczba_stojacych, int pliczba_siedzacych, string pmarka, string pmodel, int prok_produkcji) : Auto(pmarka, pmodel, prok_produkcji)
	{
		liczba_stojacych = pliczba_stojacych;
		liczba_siedzacych = pliczba_siedzacych;

	}
	
	void setLiczbaStojacych()
	{
		cin >> liczba_stojacych;
	}
	int getLiczbaStojacych()
	{
		return liczba_stojacych;
	}
	void setLiczbaSiedzacych()
	{
		cin >> liczba_siedzacych;
	}
	int getLiczbaSiedzacych()
	{
		return liczba_siedzacych;
	}
	
	void Wyswietl()
	{
		cout << "Oto twoj autobus: " << endl;
		cout << "marka: " << getmarka() << endl;
		cout << "model: " << getmodel() << endl;
		cout << "rok produkcji: " << getRokProdukcji() << endl;
		cout << "liczba miejsc stojacych: " << getLiczbaStojacych() << endl;
		cout << "liczba miejsc siedzacych: "  << getLiczbaSiedzacych() << endl;
	}
};

int main() 
{
	string ma, mo, p;
	int rp, mstoj, msiedz;
	
	cout << "Najpierw podaj dane dot. twojej ciezarowki: " << endl;
	cout << "Podaj marke: ";
	cin >> ma;
	cout << "Podaj model: ";
	cin >> mo;
	cout << "Podaj rok produkcji: ";
	cin >> rp;
	cout << "Podaj przeznaczenie ( wywrotka, ch³odnia lub cysterna): ";
	cin >> p;
	cout << endl;
	
	Ciezarowka ciezarowka (p,ma,mo,rp);
	ciezarowka.Wyswietl();
	
	cout << endl;
	
	cout << "Podaj dane dot. twojego autobusu: " << endl;
	cout << "Podaj marke: ";
	cin >> ma;
	cout << "Podaj model: ";
	cin >> mo;
	cout << "Podaj rok produkcji: ";
	cin >> rp;
	cout << "Podaj liczbe miejsc stojacych: ";
	cin >> mstoj;
	cout << "Podaj liczbe miejsc siedzacych: ";
	cin >> msiedz;
	cout << endl;
	
	Autobus autobus (mstoj,msiedz,ma,mo,rp);
	autobus.Wyswietl();
	
	//nie wiedzialam czy uzytkownik ma wybierac rodzaj auta czy nie wiec zrobilam ze podaje dane obu samochodow
	
	return 0;
}
