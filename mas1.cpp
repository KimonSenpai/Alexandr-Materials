//Вводится n и последовательность из n чисел. 
//Найти произведение чисел, не кратных 6.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int* mas = new int[n];

  for (int i = 0; i < n; ++i) {
    cin >> mas[i];
  }

  int product = 1;

  for (int i = 0; i < n; ++i) {
    if (mas[i] % 6 != 0) {
      product *= mas[i];
    } 
  }

  cout << product << '\n';
  delete[] mas;
}