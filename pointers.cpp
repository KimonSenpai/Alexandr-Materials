#include <iostream>
using std::cout;


int main() {
  int a = 5, c = 4;
  int* b = &a;
  //c = 7;
  cout << 0xf5 << ' ' << b << ' ' << b + 1 << '\n';
  cout << *b << ' ' << *(b - 1) << ' ' << b[-1] << '\n'; //разыминование - получение доступа к значению, лежащему по адресу.
}