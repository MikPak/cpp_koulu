/*
*	Ty�n nimi: Harjoitus 23 (Palautus vko 49)
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:

Jaa aiemmin esitetty henkil�rekisteri-ohjelma omiin "osa-projekteihin" ja
otsikkotiedostoihin. Laita p��ohjelma omaan tiedostoon (paa.cpp),
aliohjelmat omaan tiedostoon (ali.cpp) ja
m��ritelm�t omaan otsikkotiedostoon (maarittely.h).

Projekti tulee koostaa toimivaksi Visual Studio-
ymp�rist�sss�.

P�iv�m��r�: 22.10.2014
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