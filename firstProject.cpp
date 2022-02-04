#include <iostream>
#include <cstdio>

using namespace std;

int liczba1, liczba2, wynik;

int main() {
cout << "Podaj 1 liczbę: ";
cin >> liczba1;
cout << "Podaj liczbę 2: ";
cin >> liczba2;
wynik = liczba1 + liczba2;
cout << wynik;
cin.ignore();
getchar();
return 0;
}
