#include <iostream>
using namespace std;


int main() {
  double v0;
  const double g = 9.81;

  cout << "Input v0>>";
  cin >> v0;

  double h = v0*v0/(2*g);

  cout << "h = " << h << "m" << endl; //cout - console output, endl - end of line
  // cout << v0 << " " << h << endl;
}