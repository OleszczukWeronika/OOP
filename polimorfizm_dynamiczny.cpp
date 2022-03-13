//przyklad metod wirtualnych w polimorfizmie dynamicznym

#include <iostream>
using namespace std;

class Pracownik
{
public:
    virtual void zwrocDane(); //prototyp metody wirtualnej
};

class Nauczyciel : public Pracownik
{
public:
    void zwrocDane();
};

class Wychowawca : public Nauczyciel
{
public:
    void zwrocDane();
};

void Pracownik::zwrocDane()
{
    cout << "Wywolanie metody zwrocDane() zdefiniowanej w klasie Pracownik" << endl;
}

void Nauczyciel::zwrocDane()
{
    cout << "Wywolanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" << endl;
}

void Wychowawca::zwrocDane()
{
    cout << "Wywolanie metody zwrocDane() zdefiniowanej w klasie Wychowawca" << endl;
}

int main()
{
    Pracownik *w_pracownik; //deklaracja wskaznika o nazwe w_pracownik typu statycznego Pracownik
    Pracownik pracownik1; //utworzenie obiektu pracownik1 jako instancji klasy Pracownik
    w_pracownik = &pracownik1; //przypisanie wskaznikowi w_pracownik adresu obiektu pracownik1
    w_pracownik -> zwrocDane(); //wywolanie metody zwrocDane. zostanie wywolana ta z klasy Pracownik

    Nauczyciel pracownik2;
    w_pracownik = &pracownik2;

    /* realizacja przypisania w_pracownik = &pracownik2 spowoduje zmiane typu dynamicznego wskaznika w_pracownik z typu dynamicznego pracownik na typ dynamiczny nauczyciel, po wykonaniu tego przepisania wskaznik bedzie wskazywal na obiekt pracownik2 nalezacy do typu dynamicznego nauczyciel */

    w_pracownik -> zwrocDane();

    Wychowawca pracownik3;
    w_pracownik = &pracownik3;
    w_pracownik -> zwrocDane();

    return 0;

}