/*
*	Työn nimi: Harjoitus 24 (Palautus vko 50)
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Muuta harjoitusta 22 niin, etta valikko nayttaa seuraavalta:

VALIKKO
0 Lopeta
1 Lisaa henkilo
2 Nayta henkilo
3 Nayta kaikki henkilot
4 Poista henkilon tiedot
5 Tallenna tiedot tiedostoon
6 Hae tiedot tiedostosta


ja toteuta valikossa näkyvät toiminnot.

Päivämäärä: 6.11.2014
Versio: 1.0
*
*
*
*/

#include "maarittely.h"
#include "ali.cpp"

int main() {
	person persona[MAX_PERSON];
	int num = 0, choice = 1;
	
	DisplayMenu();

	while (choice != 0) 
	{
		cout << endl << "Enter command: ";
		cin >> choice;

		while (cin.fail()) {
			cout << "Invalid input, enter number 0-7:";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> choice;
		}

		if (choice == 0) {
			cout << "Goodbye" << endl;
			return 0;
		}

		if (choice == 1) DisplayMenu();
		if (choice == 2) AddPerson(persona, &num);
		if (choice == 3) PrintPerson(persona, num);
		if (choice == 4) PrintAllPersons(persona, num);
		if (choice == 5) DeletePerson(persona, &num);
		if (choice == 6) ExportToFile(persona, num);
		if (choice == 7) ImportFromFile(persona, &num);
	}

	return 0;
}