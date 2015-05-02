/*
*	Ty�n nimi: Harjoitus 8b
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:

Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
j�rjestyksess� (pienimm�st� suurimpaan) n�yt�lle
(katso harj. 1 suunnitelma)
a) k�yt� kokonaislukuja
b) k�yt� liukulukuja (=reaalilukuja)

P�iv�m��r�: 9.9.2014
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
