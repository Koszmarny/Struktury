//
// Created by pawel on 10.06.2019.
//

#include "Calculator.h"

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int dzialanie, powrot;
double Liczba1, Liczba2, Wynik, decyzja, ilosc;
int main() {
    start:
    cout << "----------------- KALKULATOR ----------------" << endl;
    cout << "| |" << endl;
    cout << "| |" << endl;
    cout << "| [1] Dodawanie |" << endl;
    cout << "| [2] Odejmowanie |" << endl;
    cout << "| [3] Mnozenie |" << endl;
    cout << "| [4] Dzielenie |" << endl;
    cout << "| [5] Jakim procentem jednej liczby jest druga liczba |" << endl;
    cout << "| [6] Procent z liczby |" << endl;
    cout << "| [7] Pierwiastek N-tego stopnia |" << endl;
    cout << "| [8] Srednia artmetyczna |" << endl;
    cout << "| [9] Potegowanie |" << endl;
    cout << "| |" << endl;
    cout << "| [0] Aby zakonczyc dzialanie kalkulatora |" << endl;
    cout << "| |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Decyzja: ";
    cin >> dzialanie;
    if (dzialanie <= 6 && dzialanie > 0) {
        cout << "Podaj pierwsza liczbe: ";
        cin >> Liczba1;
        cout << "Podaj druga liczbe: ";
        cin >> Liczba2;
    }
    cout << "\n";
    switch (dzialanie) {
        case 1:
            Wynik = Liczba1 + Liczba2;
            break;
        case 2:
            Wynik = Liczba1 - Liczba2;
            break;
        case 3:
            Wynik = Liczba1 * Liczba2;
            break;
        case 4:
            if (Liczba2 == 0) {
                cout << "Nie dzielimy przez zero\n";
            } else
                Wynik = Liczba1 / Liczba2;
            break;
        case 5:
            Wynik = Liczba2 / Liczba1 * 100;
            break;
        case 6:
            Wynik = Liczba1 / Liczba2 * 100;
            break;
        case 7:
            cout << "Wybrano pierwiastek dowolnego stopnia: \n";
            cout << "Podaj liczbe: ";
            cin >> Liczba1;
            cout << "Podaj stopien pierwiastka: ";
            cin >> Liczba2;
            double power;
            power = exp(log(Liczba1) / Liczba2);
            Wynik = power;
            break;
        case 8:
            cout << "Wybrano srednia artmetyczna: \n";
            Liczba1 = 0;
            Wynik = 0;
            ilosc = 0;
            cout << "Napisz 12345 aby zakonczyc wpisywanie liczb: \n";
            for (;;) {
                cout << "Podaj liczbe: ";
                cin >> Liczba1;
                if (Liczba1 == 12345) break;
                Wynik += Liczba1;
                ilosc += 1;
            }
            Wynik = Wynik / ilosc;
            break;
        case 9:
            cout << "Wybrano potegowanie: \n";
            cout << "Podaj liczbe: ";
            cin >> Liczba1;
            cout << "Podaj potege: ";
            cin >> Liczba2;
            Wynik = pow(Liczba1, Liczba2);
            break;
        case 0:
            cout << "\n\nDziekujemy za skorzystanie z kalkulatora. \nKliknij dowolny klawisz aby kontynuowac\n\n\n";
            return 0;
            break;
        default:
            break;
    }
    if (dzialanie == 0 || dzialanie >= 10) {
        cout << "\nWcisnieto nieprawidlowy klawisz" << endl;
        return 0;
    } else
        cout << "\nWynik wynosi: " << Wynik << endl;
    cout << "\n [0] Aby zamknac kalkulator";
    cout << "\n [1] Aby korzystac dalej z kalkulatora\n";
    cout << "Decyzja: ";
    cin >> powrot;
    switch (powrot) {
        case 1:
            goto start;
            break;
        case 0:
            cout << "\n\nDziekujemy za skorzystanie z kalkulatora. \nKliknij dowolny klawisz aby kontynuowac\n\n\n";
            return 0;
            break;
        default:
            return 0;
            break;
    }
}