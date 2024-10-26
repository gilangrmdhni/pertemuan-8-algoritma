#include <iostream>

using namespace std;

int main() {
    cout << "Bilangan\n";
    cout << "Ganjil: ";

    for (int i = 1; i <= 31; i += 2) {
        cout << i << " ";
    }

    cout << "\nGenap: ";

    for (int i = 2; i <= 32; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
