#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int lekcja;
    char dzien;
    cout << "Jaki jest dzien tygodnia ?: ";
    cin >> dzien;
    switch (dzien) {
        case 'pon': {
            cout << "Dzisiaj jest poniedzialek.";
            cout << "Ktora godzina lekcyjna sie zaczela?: ";
            cin >> lekcja;
            switch (lekcja) {
                case 1: cout << "Masz teraz matematyke.";break;
                case 2: cout << "Masz teraz jezyk polski.";break;
                case 3: cout << "Masz teraz fizyke.";break;
                case 4: cout << "Masz teraz wf.";break;
                case 5: cout << "Masz teraz informatyke.";break;
                case 6: cout << "Masz teraz geografie.";break;
                default: cout << "Jestes juz po lekcjach";break;
            }
        }
        case 'wt': {
            cout << "Dzisiaj jest wtorek.";
            
            cout << "Ktora godzina lekcyjna sie zaczela?: ";
            cin >> lekcja;
            switch (lekcja) {
                case 1: cout << "Masz teraz jezyk polski.";break;
                case 2: cout << "Masz teraz jezyk polski.";break;
                case 3: cout << "Masz teraz fizyke.";break;
                case 4: cout << "Masz teraz informatyke.";break;
                case 5: cout << "Masz teraz wf.";break;
                default: cout << "Jestes juz po lekcjach";break;
            }
        }
        case 'sr': {
            cout << "Dzisiaj jest sroda.";
            cout << "Ktora godzina lekcyjna sie zaczela?: ";
            cin >> lekcja;
            switch (lekcja) {
                case 1: cout << "Masz teraz jezyk polski.";break;
                case 2: cout << "Masz teraz matematyke.";break;
                case 3: cout << "Masz teraz fizyke.";break;
                case 4: cout << "Masz teraz informatyke.";break;
                case 5: cout << "Masz teraz wf.";break;
                default: cout << "Jestes juz po lekcjach";break;
            }
        }
        case 'czw': {
            cout << "Dzisiaj jest czwartek.";
            cout << "Ktora godzina lekcyjna sie zaczela?: ";
            cin >> lekcja;
            switch (lekcja) {
                case 1: cout << "Masz teraz jezyk polski.";break;
                case 2: cout << "Masz teraz jezyk polski.";break;
                case 3: cout << "Masz teraz fizyke.";break;
                case 4: cout << "Masz teraz informatyke.";break;
                case 5: cout << "Masz teraz wf.";break;
                default: cout << "Jestes juz po lekcjach";break;
            }
        }
        case 'pt': {
            cout << "Dzisiaj jest piatek.";
            cout << "Ktora godzina lekcyjna sie zaczela?: ";
            cin >> lekcja;
            switch (lekcja) {
                case 1: cout << "Masz teraz jezyk polski.";break;
                case 2: cout << "Masz teraz jezyk polski.";break;
                case 3: cout << "Masz teraz fizyke.";break;
                case 4: cout << "Masz teraz informatyke.";break;
                case 5: cout << "Masz teraz wf.";break;
                default: cout << "Jestes juz po lekcjach";break;
            }
        }
    default: cout << "Podales zly dzien tygodnia! ";break;
    }
    
    cin.ignore();
    getchar();
    return 0;
}