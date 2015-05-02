/*
*	Työn nimi: Harjoitus 16 (Palautus vko 46)
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.

Päivämäärä: 15.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

struct henkilotiedot {
	char etunimi[50], sukunimi[50], osoite[50], postinumero[50];
	double koulumatka;
	int kengannumero;
};

int main() {

	henkilotiedot tiedot;

	cout << "Anna etunimi: ";
	cin.getline(tiedot.etunimi, 50);

	cout << "Anna sukunimi: ";
	cin.getline(tiedot.sukunimi, 50);

	cout << "Anna koulumatka: ";
	cin >> tiedot.koulumatka;
	cin.ignore();

	cout << "Anna osoite: ";
	cin.getline(tiedot.osoite, 50);

	cout << "Anna postinumero: ";
	cin >> tiedot.postinumero;

	cout << "Anna keng\x84nnumero: ";
	cin >> tiedot.kengannumero;

	cout << endl;

	cout << "Etunimi: " << tiedot.etunimi << endl;
	cout << "Sukunimi: " << tiedot.sukunimi << endl;
	cout << "Koulumatka: " << tiedot.koulumatka << endl;
	cout << "Osoite: " << tiedot.osoite << " " << tiedot.postinumero << endl;
	cout << "Keng\x84nnumero: " << tiedot.kengannumero << endl;
}