/*
*	Tyˆn nimi: Harjoitus 21 (Palautus vko 48)
*	Tekij‰: Mikko Pakkanen
*	Kuvaus teht‰v‰st‰:

Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan

P‰iv‰m‰‰r‰: 18.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <string>

using namespace std;

void tulosta_valikko();
int KysyValinta();
double Summa(float luku1, int luku2);

void main(void)
{
	int valinta;
	float luku1, luku2;

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
			valinta = KysyValinta();

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
				cout << "Summa: " << luku1 << " + " << luku2 << " = " << Summa(luku1, luku2) << endl;
			if (valinta == 2) // Erotus
				cout << "Erotus: " << luku1 << " - " << luku2 << " = " << luku1 - luku2 << endl;
			if (valinta == 3) // Tulo
				cout << "Tulo: " << luku1 << " * " << luku2 << " = " << luku1 * luku2 << endl;
			if (valinta == 4) // Osam‰‰r‰
				cout << "Osam\x84\x84r\x84: " << luku1 << " / " << luku2 << " = " << luku1 / luku2 << endl;
			if (valinta == 5) // Jakoj‰‰nnˆs
				cout << "Jakoj\x84\x84n\x94s: " << luku1 << " % " << luku2 << " = " << (int)luku1 % (int)luku2 << endl;
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

int KysyValinta(void) {
	int operaatio;
	cout << "Valitse operaatio: ";
	cin >> operaatio;
	cout << endl;

	return operaatio;
}

double Summa(float luku1, int luku2) {
	float summa;
	summa = luku1 + luku2;

	return summa;
}


