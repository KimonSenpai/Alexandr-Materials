//На вход поступает последовательность цифр, завершающаяся числом -1. 
//Посчитайте количество каждой из цифр.

#include <iostream>
using namespace std;

int main() {
  int dig[10] = {};//обнуление массива
  for (;;) {
    int val;
    cin >> val;
    if (val == -1) break;

    dig[val]++;
  }

  for (int i = 0; i <= 9; ++i) {
    cout << i << ": " << dig[i] << '\n';
  }

}
