/*
*	Työn nimi: Harjoitus 22 (Palautus vko 49)
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka toimii henkilörekisterinä (max 10).
Ohjelma antaa käyttäjälle seuraavan valikon:

VALIKKO
0 Lopeta
1 Lisaa henkilo
2 Nayta kaikki henkilot

Tallenna henkilöiden tiedot tietuetaulukkoon.
Tallennettavia tietoja ovat
etunimi (merkkijono)
koulumatka (liukuluku)
hatun koko (kokonaisluku)

Toteuta ensin koko ohjelma pääohjelmana.

Tämän jälkeen lisää seuraavat aliohjelmat:
a) int Valikko(void);

b) void TulostaHenkilo(TIEDOT );
c) void TulostaKaikkiHenkilot(TIEDOT [], int lkm);
d) void LisaaHenkilo(TIEDOT [], int *lkm);

Päivämäärä: 20.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <string>

using namespace std;

const int MAX_PERSON = 9;

struct person {
	string firstname;
	double distschool;
	int sizehat;
};

int menu(void)
{
	int choice = 0;

	cout << endl << "Person register ( Max " << MAX_PERSON << " persons. )" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Menu" << endl;
	cout << "0 - Quit" << endl;
	cout << "1 - Add person" << endl;
	cout << "2 - View person in array" << endl;
	cout << "3 - View all persons in array" << endl;
	cout << endl << "Enter command: ";
	cin >> choice;
	
	return choice;
}

void add_person(person *persona, int *lkm) {

	if (*lkm != MAX_PERSON)
	{
		cout << endl << "Add person" << endl;
		cout << "------------" << endl << endl;
		cout << "First name: ";
		cin >> persona[*lkm].firstname;
		cout << "Distance from school: ";
		cin >> persona[*lkm].distschool;
		cout << "Sife of the hat: ";
		cin >> persona[*lkm].sizehat;
		cout << endl;
		
		cout << "Added " << persona[*lkm].firstname << "!" << endl;
		cout << "Total " << *lkm + 1 << " names in register. Max " << MAX_PERSON << " persons. " << endl;
		(*lkm)++;

	}
	else
	{
		cout << "Reached max number in persons. Can't add more." << endl;
	}
}

void PrintAllPersons(person *persona, int amount) {

	cout << endl << "View all persons in array" << endl;
	cout <<	"-------------------------" << endl << endl;

	if (amount == 0)
		cout << "No persons in the register yet." << endl;

	for (int i = 0; i < amount; i++)
	{
		cout << "Person #" << i+1 << endl;
		cout << "First name: " << persona[i].firstname << endl;
		cout << "Distance from school: " << persona[i].distschool << "km" << endl;
		cout << "Size of the hat: " << persona[i].sizehat << endl;
		cout << "----------------" << endl;
	}

}

void PrintPerson(person *persona, int num) {

	cout << endl << "View person in array" << endl;
	cout <<	"--------------------" << endl << endl;

	if (num != 0) 
	{
		int numb;
		cout << "Enter a number (0-9):" << endl;
		cin >> numb;

		if (numb > MAX_PERSON)
		{
			cout << "Incorrect input, the maximum number of people in the array is " << MAX_PERSON << "." << endl;
		}
		else
		{
			cout << "Name: " << persona[numb - 1].firstname << endl;
			cout << "Distance from school: " << persona[numb - 1].distschool << "km" << endl;
			cout << "Size of the hat: " << persona[numb - 1].sizehat << endl;
		}
	} else
		cout << "No persons in the register yet." << endl;
}

int main() {
	person persona[MAX_PERSON];
	int num = 0, choice = 1;

	while (choice != 0) {
		choice = menu();

		if (choice == 0)
		{
			return 0;
		}
		if (choice == 1)
		{
			add_person(persona, &num);
		}
		if (choice == 2)
		{
			PrintPerson(persona, num);
		}
		if (choice == 3)
		{
			PrintAllPersons(persona, num);
		}
	}

	return 0;
}