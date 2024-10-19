#include <iostream>

using namespace std;

int main() {
  int angka1, angka2, angka3;

  cout << "Masukkan tiga angka: ";
  cin >> angka1 >> angka2 >> angka3;

  if (angka1 <= angka2) {
    if (angka1 <= angka3) {
      cout << "Angka terkecil: " << angka1 << endl;
    } else {
      cout << "Angka terkecil: " << angka3 << endl;
    }
  } else {
    if (angka2 <= angka3) {
      cout << "Angka terkecil: " << angka2 << endl;
    } else {
      cout << "Angka terkecil: " << angka3 << endl;
    }
  }

  return 0;
}
