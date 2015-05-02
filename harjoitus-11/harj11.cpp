/*
*	Työn nimi: Harjoitus 11
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!

Päivämäärä: 15.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <string>

using namespace std;

void tulosta_valikko();

void main(void)
{
	int luku1, luku2, valinta;

	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	cout << endl;

		if (luku1 >= 0 && luku2 >= 0)
		{
			tulosta_valikko();
			do{
				cout << endl << "Luvut: " << luku1 << " & " << luku2 << endl; 
				cout << "Valitse operaatio: ";
				cin >> valinta;
				cout << endl;

				if (valinta == 0) break;

				if (valinta == 6) // Uudet luvut
				{
					cout << "Anna luku 1: ";
					cin >> luku1;
					cout << "Anna luku 2: ";
					cin >> luku2;
					cout << endl;
				}

				if (valinta == 1) // Summa
					cout << "Summa: " << luku1 << " + " << luku2 << " = " << luku1 + luku2 << endl;
				if (valinta == 2) // Erotus
					cout << "Erotus: " << luku1 << " - " << luku2 << " = " << luku1 - luku2 << endl;
				if (valinta == 3) // Tulo
					cout << "Tulo: " << luku1 << " * " << luku2 << " = " << luku1 * luku2 << endl;
				if (valinta == 4) // Osamäärä
					cout << "Osam\x84\x84r\x84: " << luku1 << " / " << luku2 << " = " << luku1 / luku2 << endl;
				if (valinta == 5) // Jakojäännös
					cout << "Jakoj\x84\x84n\x94s: " << luku1 << " % " << luku2 << " = " << luku1 % luku2 << endl;
			} while (1);
		}
}

void tulosta_valikko() {

	cout << "VALIKKO" << endl;
	cout << "0. Lopetus" << endl;
	cout << "1. Summa" << endl;
	cout << "2. Erotus" << endl;
	cout << "3. Tulo" << endl;
	cout << "4. Osam\x84\x84r\x84" << endl;
	cout << "5. Jakoj\x84\x84n\x94s" << endl;
	cout << "6. Sy\x94t\x84 uudet luvut laskemista varten" << endl;

}

