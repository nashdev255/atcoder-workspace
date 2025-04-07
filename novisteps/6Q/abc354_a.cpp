#include <iostream>
using namespace std;
using ll = long long;

/*
* @param int x 底
* @param int n 指数
* @return long long xのn乗
*/
long long powll(const int x, const int n) {
  long long res = 1;
  for ( int i = 0; i < n; ++i ) res *= x;
  return res;
}

int main() {
  int H;
  cin >> H;
  ll heightOfPlant = 0;
  for ( int i = 0; i < 64; ++i ) {
    if ( H < heightOfPlant ) {
      cout << i << endl;
      return 0;
    }
    heightOfPlant += powll(2, i);
  }
  return 0;
}
