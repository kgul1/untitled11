#include <iostream>
using namespace std;
class Bohater {
public:
    //atrybuty
    string uzbrojenie;
    string imie;
    string moc1;
    int moc;

//metody
    void dodaj_legende() {
        cout << "\nDODAWANIE NOWEJ LEGENDY  DO BAZY: " << endl;
        cout << "\nPodaj  uzbrojenie: ";
        cin >> uzbrojenie;
        cout << "\npodaj imie bohatera:  ";
        cin >> imie;
        cout << "przykladowe moce to: asassin mag palladyn zwiadowca"<<"\npodaj dziedzine mocy : ";
        cin >> moc1;
        cout << "\npodaj ile jednostek jej przysluguje: ";
        cin >> moc;

    }
    void wywolaj_bohatera()
    {
        if (uzbrojenie == "klaun") cout <<"Imie bohatera: "<< imie <<endl<<" rodzaj mocy: "<<moc1 <<endl<<" ilosc mocy: " << moc ;
        else if (uzbrojenie == " kapibara")  cout <<"Imie bohatera: "<< imie <<endl<<" rodzaj mocy: "<<moc1 <<" ilosc mocy: " << moc;
        else if (uzbrojenie == " wojownik") cout <<"Imie bohatera: "<< imie <<" rodzaj mocy: "<<moc1 <<endl <<" ilosc mocy: " << moc ;
        else if (uzbrojenie == " pies") cout <<"Imie bohatera: "<< imie <<endl <<" rodzaj mocy: "<<moc1 <<endl<<" ilosc mocy: " << moc ;
        else if (uzbrojenie == " lew") cout <<"Imie bohatera: "<< imie<<endl<<" rodzaj mocy: "<<moc1 <<endl<<" ilosc mocy: " << moc ;
        else cout << " nie posiadamy gatunku w bazie danych: ";
    }
};
int main()
{

    Bohater z1;
    z1.dodaj_legende();
    z1.wywolaj_bohatera();

    Bohater z2;
    z2.dodaj_legende();
    z2.wywolaj_bohatera();

    // }
    return 0;
}
