/*
*	Työn nimi: Harjoitus 7b
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi senttein� > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg

...
a) k�yt� syotto/tulostus toimintoihin funktioita
printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHD��N MY�HEMMIN
b) k�yt� cin/cout/cin.get... olioita ohjelman
toteuttamiseen (c++ metodit, kirja sivu 92 - 99)
*
*
*
*/

#include <iostream>

using namespace std;

void main(void)
{
	int paino, pituus, ihannepaino;
	char nimi[30], osoite[40];

	cout << "Anna nimesi: \n";
	cin.getline(nimi, 30);
	cout << "Anna pituutesi sentteina: \n";
	cin >> pituus;
	cout << "Anna osoitteesi: \n";
	cin.ignore(1);
	cin.getline(osoite, 40);
	cout << "Anna painosi kiloina: \n";
	cin >> paino;

	ihannepaino = paino - 100;

	cout << "Arvoisa " << nimi << "\n";
	cout << "Osoitteesi on: " << osoite << "\n";
	cout << "Nykyinen painosi on: " << paino << " Kg \n";
	cout << "Ihannepainosi on: " << pituus - 100 << " Kg \n";
	cout << "Erotus: " << paino - ihannepaino << " Kg \n";

}
