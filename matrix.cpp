#include <iostream>
#include <vector>
using namespace std;


int main() {
  /*
  int n;
  cin >> n;
  int stat_mas[200];
  int* din_mas = new int[200];

  vector<int> vec_mas(n, -1);
  vec_mas.push_back(40);
  for (int i = 0; i < vec_mas.size(); ++i)
    cout << vec_mas[i] << ' ';
  //vec_mas.insert(...), vec_mas.erase(...)
  cout << vec_mas.size();
  cout << '\n';
  
  
  delete[] din_mas;
  */
  int m, n;
  cin >> m >> n;

  int stat_matr[5][6];
  int** din_matr = new int*[m];
  for (int i = 0; i < m; ++i) {
    din_matr[i] = new int[n];
  }

  din_matr[1][4] = 6;

  vector<vector<int>> vec_matr(m, vector<int>(n, -1));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < i+1; ++j) {
      vec_matr[i][j] = i*j;
    }
  }


  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << vec_matr[i][j] << '\t';
    }
    cout << '\n';
  }
}