#include <iostream>

using namespace std;

class Komputer
{
private:
	string marka;
	string model;
public:
	void setmarka(string pmarka)
	{
		marka = pmarka;
	}
	string getmarka()
	{
		return marka;
	}
	void setmodel(string pmodel)
	{
		model = pmodel;
	}
	string getmodel()
	{
		return model;
	}
};

class K_Stacjonarny : public Komputer
{
private:
	string TypObudowy;

public:
	void setTypObudowy(string pTypObudowy)
	{
		TypObudowy = pTypObudowy;
	}
	string getTypObudowy()
	{
		return TypObudowy;
	}
	
	void Wyswietl() 
	{
		cout << "Oto twoj komputer stacjonarny: " << endl;
		cout << "marka: " << getmarka() << endl;
		cout << "model: " << getmodel() << endl;
		cout << "typ obudowy: " << getTypObudowy();
	}
};	
class Laptop : public Komputer
{
private:
	string KolorObudowy;
	string PrzekatnaEkranu;
	string MaterialObudowy;
public:
	void setKolorObudowy(string pKolorObudowy)
	{
		KolorObudowy = pKolorObudowy;
	}
	string getKolorObudowy()
	{
		return KolorObudowy;
	}
	void setPrzekatnaEkranu(string pPrzekatnaEkranu)
	{
		PrzekatnaEkranu = pPrzekatnaEkranu;
	}
	string getPrzekatnaEkranu()
	{
		return PrzekatnaEkranu;
	}
	void setMaterialObudowy(string pMaterialObudowy)
	{
		MaterialObudowy = pMaterialObudowy;
	}
	string getMaterialObudowy()
	{
		return MaterialObudowy;
	}
	
	void Wyswietl()
	{
		cout << "Oto twoj laptop: " << endl;
		cout << "marka: " << getmarka() << endl;
		cout << "model: " << getmodel() << endl;
		cout << "kolor obudowy: " << getKolorObudowy() << endl;
		cout << "przekatna ekranu: " << getPrzekatnaEkranu() << endl;
		cout << "material obudowy: " << getMaterialObudowy();
	}
};

int main() 
{
	string ma, mo, to, kob, pe, mob;
	
	K_Stacjonarny stacjonarny;
	Laptop laptop;
	
	cout << "Podaj marke komputera: "; cin >> ma;
	cout << "Podaj model: "; cin >> mo;
	cout << "Podaj typ obudowy (slim, tower, big tower, desktop): "; cin >> to;
	cout << endl;
	
	stacjonarny.setmarka(ma);
	stacjonarny.setmodel(mo);
	stacjonarny.setTypObudowy(to);
	stacjonarny.Wyswietl();
	
	cout << endl; cout << endl;
	
	cout << "Podaj marke laptopa: "; cin >> ma;
	cout << "Podaj model: "; cin >> mo;
	cout << "Podaj kolor obudowy: "; cin >> kob;
	cout << "Podaj przekatna ekranu: "; cin >> pe;
	cout << "Podaj material obudowy (tworzywo sztuczne lub alu): "; cin >> mob;
	cout << endl;
	
	laptop.setmarka(ma);
	laptop.setmodel(mo);
	laptop.setKolorObudowy(kob);
	laptop.setPrzekatnaEkranu(pe);
	laptop.setMaterialObudowy(mob);
	laptop.Wyswietl();
	
	return 0;
}
