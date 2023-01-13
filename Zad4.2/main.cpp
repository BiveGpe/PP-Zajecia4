#include <iostream>
#include <unordered_map>

using namespace std;

// Pobiera dlugosc tablicy od uzytkownika
int getTableLength() {
    int tableLength;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> tableLength;

    return tableLength;
}

int main() {
    int tableLength = getTableLength();

    // Tworzy i pobiera elementy tablicy od użytkownika
    int array[tableLength];
    for (int i = 0; i < tableLength; i++) {
        cout << "Podaj " << i << " element tablicy: ";
        cin >> array[i];
    }

    // Tworzy konetent klucz -> wartość
    unordered_map<int, int> howOften;
    int maxElement = array[0], maxCount = 1;

    // Liczy ilość występowań
    for (int i = 0; i < tableLength; i++) {
        howOften[array[i]]++;
        if (howOften[array[i]] > maxCount) {
            maxElement = array[i];
            maxCount = howOften[array[i]];
        }
    }

    // Wyświetla najczęściej występujacy element
    cout << "Najczesciej wystepujacy element to: " << maxElement << endl;
    cout << "Wystapil: " << maxCount << " razy" << endl;

    return 0;
}
