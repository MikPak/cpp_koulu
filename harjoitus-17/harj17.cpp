/*
*	Tyˆn nimi: Harjoitus 17 (Palautus vko 46)
*	Tekij‰: Mikko Pakkanen
*	Kuvaus teht‰v‰st‰:

Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle

P‰iv‰m‰‰r‰: 18.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

struct personaldata {
	char firstname[50], lastname[50], address[50], postal[50];
	double distschool;
	int shoesize;
};

void Tulosta(personaldata *details)
{
	for (int i = 0; i < 1; ++i)
	{
		cout << details[i].firstname << " " << details[i].lastname << endl;
		cout << details[i].address << " " << details[i].postal << endl;
		cout << "Distance from school: " << details[i].distschool << endl;
		cout << "Shoe size: " << details[i].shoesize << endl;
		cout << endl;
	}
}

int main() {

	personaldata student1, student2, student3;

	//Student 1
	cout << "Enter first name: ";
	cin.getline(student1.firstname, 50);

	cout << "Enter last name: ";
	cin.getline(student1.lastname, 50);

	cout << "Enter distance from school: ";
	cin >> student1.distschool;
	cin.ignore();

	cout << "Enter address: ";
	cin.getline(student1.address, 50);

	cout << "Enter postal: ";
	cin >> student1.postal;

	cout << "Enter shoe size: ";
	cin >> student1.shoesize;
	cout << endl;

	//Student 2
	strcpy_s(student2.firstname, 50, "Olli");
	strcpy_s(student2.lastname, 50, "Oppilas");
	student2.distschool = 9.4;
	strcpy_s(student2.address, 50, "Opiskelijakatu 5A 14");
	strcpy_s(student2.postal, 50, "40200");
	student2.shoesize = 39;

	//Student 3
	strcpy_s(student3.firstname, 50, "Ossi");
	strcpy_s(student3.lastname, 50, "Oppilas");
	student3.distschool = 8.4;
	strcpy_s(student3.address, 50, "Koululaiskatu 18B 2");
	strcpy_s(student3.postal, 50, "40100");
	student3.shoesize = 41;

	if (student1.distschool < student2.distschool && student1.distschool < student3.distschool) // Student 1 has smallest schooldist
	{
		Tulosta(&student1);
		if (student2.distschool < student3.distschool) // 2 < 3
		{
			Tulosta(&student2);
			Tulosta(&student3);
		}

		if (student3.distschool < student2.distschool) // 3 < 2
		{
			Tulosta(&student3);
			Tulosta(&student2);
		}
	}
	
	if (student2.distschool < student3.distschool && student2.distschool < student1.distschool) // Student 2 has smallest schooldist
	{
		Tulosta(&student2);
		if (student3.distschool < student1.distschool) // 3 < 1
		{
			Tulosta(&student3);
			Tulosta(&student1);
		}
	
		if (student1.distschool < student3.distschool) // 1 < 3
		{
			Tulosta(&student1);
			Tulosta(&student3);
		}
	}

	if (student3.distschool < student2.distschool && student3.distschool < student1.distschool) // Student 3 has smallest schooldist
	{
		Tulosta(&student3);
		if (student2.distschool < student1.distschool) // 2 < 1
		{
			Tulosta(&student2);
			Tulosta(&student1);
		}

		if (student1.distschool < student2.distschool) // 1 < 2
		{
			Tulosta(&student1);
			Tulosta(&student2);
		}
	}
}