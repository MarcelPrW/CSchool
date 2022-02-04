#include <iostream>
#include <cstdio>

using namespace std;

int liczba1, liczba2, wynik1, wynik2, wynik3, wynik4;

int main() {
cout << "Podaj 1 liczbę: ";
cin >> liczba1;
cout << "Podaj liczbę 2: ";
cin >> liczba2;

wynik1 = liczba1 + liczba2;
wynik2 = liczba1 - liczba2;
wynik3 = liczba1 * liczba2;
wynik4 = liczba1 / liczba2;

cout << "Suma liczb wynosi: " << wynik1 << endl;
cout << "Roznica liczb wynosi: " << wynik2 << endl;
cout << "Iloczyn liczb wynosi: " << wynik3 << endl;
cout << "Iloraz liczb wynosi: " << wynik4 << endl;

cin.ignore();
getchar();
return 0;
}
