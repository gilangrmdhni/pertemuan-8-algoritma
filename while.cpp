#include <iostream>

using namespace std;

int main() {
    cout << "Bilangan\n";
    cout << "Ganjil: ";

    int i = 1;
    while (i <= 31) {
        cout << i << " ";
        i += 2;
    }

    cout << "\nGenap: ";

    i = 2;
    while (i <= 32) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;

    return 0;
}
