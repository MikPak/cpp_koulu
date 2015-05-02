/*
*	Työn nimi: Harjoitus 15a
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:


TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

Päivämäärä: 15.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

void main() {
	char merkkijono1[19], merkkijono2[19] = { " " };

	cout << "Anna 17 merkki\x84: " << endl;
	cin.getline(merkkijono1, 18);


	for (int i = 0, j = 0; merkkijono1[i] != '\0'; i++,j++) // Poistetaan välilyönnit käyttäjän syötteestä
	{
		if (merkkijono1[i] != ' ')
		{
			merkkijono2[j] = merkkijono1[i];
		}
		else
		{
			j--;
		}
	}

	reverse(merkkijono2, merkkijono2 + strlen(merkkijono2));
	cout << merkkijono2;

}