# include <iostream> // Udostępnia strumienie wejścia i wyjścia: cin oraz cout.

// Pozwala używać nazw z biblioteki standardowej bez przedrostka std::.
using namespace std;
int main() {
    // Zmienna przechowująca liczbę całkowitą podaną przez użytkownika.
    int liczba;
    // Wyświetlenie prośby o liczbę i wczytanie jej z klawiatury.
    cout << "Podaj liczbe: ";
    cin >> liczba;
    // Operator % oblicza resztę z dzielenia; reszta 0 oznacza podzielność.
    // Operator && wymaga, aby liczba była podzielna jednocześnie przez 3 i 7.
    if ((liczba % 3 == 0) && (liczba % 7 == 0)) {
        cout << "Liczba " << liczba << " jest podzielna przez 3 i 7";
    } else {
        // Ten komunikat pojawia się, gdy co najmniej jeden warunek nie jest spełniony.
        cout << "Liczba " << liczba << " nie jest podzielna przez 3 lub 7";
    }
    // Zakończenie programu kodem 0 oznaczającym poprawne wykonanie.
    return 0;
}
