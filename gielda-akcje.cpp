#include<iostream>
#include<cstring>

using namespace std;

Class CPakiet 

{

public:
    CPakiet();
    CPakiet(const char * fm, int a=0, float b=0);
    void sprzedaj(int liczba, float cena);
    void zakup(int liczba, float cena);
    void uaktualnij(float cena);
    void wyswietl();

private:
    char firma[20];
    int akcje;
    float wart_akcji;
    float wart_calk;
    void ustaw_calk() { wart_calk = akcje * wart_akcji; }
}

CPakiet::CPakiet() 
{
    akcje = 0;
    wart_akcji = 0;
    wart_calk = 0;
    strcpy(firma, "bez nazwy");
}

CPakiet::CPakiet() 
{
    akcje = a;
    wart_akcji = b;
    strcpy(firma, fm, 19);
    firma[19] = '\0';
    ustaw_calk();
}

void CPakiet::zakup()
{
    if (liczba >= 0){
        akcje = akcje + liczba;
        wart_akcji = cena;
        ustaw_calk();
    }
    else
        cout << "Nie da sie kupic ujemnej liczby akcji!" << endl;
}

void CPakiet::sprzedaj()
{
    if (akcje >= liczba) {
        akcje = akcje - liczba;
        wart_akcji = cena;
        ustaw_calk();
    }
    else
        cout << "Nie da sie sprzedac akcji ponad stan!" << endl;
}

void CPakiet::uaktualnij() {
    wart_akcji = cena;
    ustaw_calk();
}

void CPakiet::wyswietl()
{
    cout << "Firma: " << firma << "Akcje: " << akcje << endl;
    cout << "Wartosc akcji: " << wart_akcji << "Wartosc pakietu: " << wart_calk << endl;
}

int main()
{
    int ilosc_akcji;
    float cena_akcji;
    char nazwa[20];
    cout << "podaj ilosc akcji: ";
    cin >> ilosc_akcji;
    cout << "podaj cene akcji: ";
    cin >> cena_akcji;
    cout << "podaj nazwe firmy: ";
    cin >> nazwa;
    CPakiet ob(nazwa, ilosc_akcji, cena_akcji);
    ob.wyswietl();
    return 0;
}