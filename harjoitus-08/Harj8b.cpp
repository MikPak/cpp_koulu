/*
*	Työn nimi: Harjoitus 8b
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä kokonaislukuja
b) käytä liukulukuja (=reaalilukuja)

Päivämäärä: 9.9.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <algorithm>
#include <functional>

using std::cout;
using std::cin;
using std::endl;

const int SIZE = 3;

using namespace std;

int main(){

	double
		value = 0,
		i = 0,
		intArray[3];

	for (int i = 0; i < 3; i++)
	{

		cout << "Anna numero: ";
		cin >> value;
		intArray[i] = value;

	}

	sort(intArray, intArray + 3);
	cout << "Numerot pienimm\x84st\x84 suurimpaan: " << endl;

	for (int i = 0; i < 3; i++)
		cout << intArray[i] << " ";

	return 0;
}
