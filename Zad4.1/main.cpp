#include <iostream>

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

    // Znajduje największy element
    int max = array[0];
    for (int i = 1; i < tableLength; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

     // Wyświetla największy element
    cout << "Najwiekszy element: " << max << endl;

    return 0;
}