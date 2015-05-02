/*
*	Tyˆn nimi: Harjoitus 6
*	Tekij‰: Mikko Pakkanen
*	Kuvaus teht‰v‰st‰:

Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.

P‰iv‰m‰‰r‰: 9.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

void main(void)
{
	unsigned int luku1, luku2;

	cout << "Paljonko sinulla on rahaa: \n";
	cin >> luku1;
	cout << "Lihapiirakan hinta: \n";
	cin >> luku2;

	if (luku1 - luku2 < 0)
		cout << "Paastoa\n";
	else
		cout << "Sinulle j\x84\x84 rahaa: " << luku1 - luku2;

}
