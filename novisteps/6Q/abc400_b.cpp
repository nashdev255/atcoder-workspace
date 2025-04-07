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
  int N, M;
  cin >> N >> M;
  ll X = 0;
  for ( int i = 0; i <= M; ++i ) {
    X += powll(N, i);
    if ( 1e9 < X ) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << X << endl;
  return 0;
}
