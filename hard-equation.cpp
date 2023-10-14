#include <iostream>
using namespace std;


int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        if (d == 0) {
          cout << "NO";
        } else {
          cout << "INF";
        }
      } else { // 0/(cx + d) = 0
        if (d % c == 0) {
          cout << "INF except " << -d/c;
        } else {
          cout << "INF";
        }
      }
    } else {
      cout << "NO";
    }
  } else {
    if (b % a == 0) {
      int x = -b/a;
      if (c*x + d != 0) {
        cout << x;
      } else {
        cout << "NO";
      }
    } else {
      cout << "NO";
    }
  }
}