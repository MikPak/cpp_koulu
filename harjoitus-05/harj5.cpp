/*
*	Työn nimi: Harjoitus 5
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Kirjoita ohjelma, joka pyytää käyttäjältä kaksi kokonaislukua.
Ohjelma tulostaa tekstin BINGO, mikäli luvut ovat samoja.
Muussa tapauksessa ohjelma tulostaa tekstin BONGO.

Päivämäärä: 9.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

void main(void)
{
	int luku1, luku2;

	cout << "Anna luku 1:\n";
	cin >> luku1;
	cout << "Anna luku 2:\n";
	cin >> luku2;

	if (luku1 == luku2)
		cout << "BINGO\n";
	else
		cout << "BONGO\n";

}
