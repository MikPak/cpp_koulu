/*
*	Ty�n nimi: Harjoitus 13b
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:

Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.

a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka

*	P�iv�m��r�: 15.10.2014
*	Versio: 1.0
*
*/


#include <iostream>
#include <string>

using namespace std;

void main(void)
{
	string etunimi, sukunimi, kokonimi;

	cout << "Anna etunimesi: ";
	cin >> etunimi;

	cout << "Anna sukunimesi: ";
	cin >> sukunimi;

	kokonimi = etunimi + " " + sukunimi;
	cout << "Nimesi oli: " << kokonimi << endl;
}