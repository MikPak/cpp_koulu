/*
*	Ty�n nimi: Harjoitus 14
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:


Tee ohjelma, joka kysyy henkil�tietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

K�yt� C++:n cin- ja cout-olioita ohjelman toteuttamiseen.

P�iv�m��r�: 15.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <string>

using namespace std;

void main() {
	char etunimi[50], sukunimi[50], osoite[50];
	int kengannumero, postinumero;
	double koulumatka;

	cout << "Anna (kaikki) etunimesi: " << endl;
	cin.getline(etunimi,30);

	cout << "Anna keng\x84nnumero: " << endl;
	cin >> kengannumero;

	cout << "Anna Sukunimi: " << endl;
	cin >> sukunimi;

	cout << "Anna koulumatka: " << endl;
	cin >> koulumatka;
	cin.ignore(1000, '\n');

	cout << "Anna osoitteesi: " << endl;
	cin.getline(osoite,50);

	cout << "Anna postinumero: " << endl;
	cin >> postinumero;

	cout << endl << etunimi << " " << sukunimi << endl;
	cout << osoite << endl;
	cout << postinumero << endl;
	cout << "Keng\x84nnumero: " << kengannumero << endl; 
	cout << "Koulumatka: " << koulumatka << endl;

}