#include <iostream>

using namespace std;

int main() {
    // Deklaracja tablicy
    int array[10][10]{};

    // Zapełnienie pierwszego i drugiego rzedu tablicy (reszte zerami)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            array[i][0] = i;
            array[i][1] = 2 * i;
        }
    }

    // Wyświetla tablice
    for (auto & i : array) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
