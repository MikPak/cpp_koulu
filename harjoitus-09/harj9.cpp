/*
*	Työn nimi: Harjoitus 9
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.

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
	int luku1, luku2, valinta;

	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	cout << endl;


	if (luku1 && luku2)
	{
		cout << "VALIKKO" << endl;
		cout << "1. Summa" << endl;
		cout << "2. Erotus" << endl;
		cout << "3. Tulo" << endl;
		cout << "4. Osam\x84\x84r\x84" << endl;
		cout << "5. Jakoj\x84\x84n\x94s" << endl;

		cout << endl << "Valitse operaatio: ";
		cin >> valinta;

		switch (valinta)
		{
			case 1:
			{
				cout << "Summa: " << luku1 + luku2;
				break;
			}
			case 2:
			{
				cout << "Erotus: " << luku1 - luku2;
				break;
			}
			case 3:
			{
				cout << "Tulo: " << luku1 * luku2;
				break;
			}
			case 4:
			{
				cout << "Osam\x84\x84r\x84: " << luku1 / luku2;
				break;
			}
			case 5:
			{
				cout << "Jakoj\x84\x84n\x94s: " << luku1 % luku2;
				break;
			}
		}
	}

}
