#include <iostream>
#define MAX 10

using namespace std;

int summa;
void Laske(int, int);
void main(void)
{
     const int max = 20;
     int luku1 = 2;
     int luku2;
     
     cout << "Sy�t� luku: ";
     cin >> luku2;
     Laske(luku1, luku2);
     if (summa < MAX)
        cout << "Summa on pienempi kuin " << MAX;
     if (summa < max)
        cout << "Summa on pienempi kuin " << max;

}
