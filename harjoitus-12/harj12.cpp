/*
*	Työn nimi: Harjoitus 12
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;

*	Päivämäärä: 10.9.2014
*	Versio: 1.0
*
*/

#include <iostream>

using namespace std;

void main(void)
{
	int luku1;
	cout << "Sy\x94t\x84 luku v\x84lilt\x84 1-9: ";
	cin >> luku1;

	if (luku1 < 10 && luku1 > 0)
	{

		for (int i = 1; i <= luku1; i++) // Kunnes i on yhtäsuuri kuin käyttäjän antama luku
		{
			for (int a = 1; a <= i; a++) // Kunnes a on yhtäsuuri kuin luvun arvo
			{
				cout << i;
			}
			cout << endl;
		}
	}
}