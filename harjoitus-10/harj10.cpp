/*
*	Ty�n nimi: Harjoitus 10
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:


Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
sy�tt�m�ll� luku 0.

Tulostus:
Sy�tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens� 10 kpl 100.00%

P�iv�m��r�: 10.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

void main(void)
{
	int luku1 = 1, neg_prosentti, pos_prosentti, kok_prosentti, positiiviset = 0, negatiiviset = 0;

	while (luku1 != 0)
	{
		cout << "Anna luku: " << endl;
		cin >> luku1;

		if (luku1 >= 0)
			positiiviset++;
		else
			negatiiviset++;
	}

	neg_prosentti = (negatiiviset * 100) / (negatiiviset + positiiviset);
	pos_prosentti = (positiiviset * 100) / (negatiiviset + positiiviset);
	kok_prosentti = ((positiiviset + negatiiviset) * 100) / (negatiiviset + positiiviset);

	cout << endl;
	cout << "Sy\x94tit kokonaislukuja seuraavasti: " << endl;
	cout << "Negatiiviset " << negatiiviset << " kpl " << neg_prosentti << "% " << endl;
	cout << "Positiviset " << positiiviset << " kpl " << pos_prosentti << "% " << endl;
	cout << "Yhteens\x84 " << positiiviset + negatiiviset << " kpl " << kok_prosentti << "% " << endl;

}
