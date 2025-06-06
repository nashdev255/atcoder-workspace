#include <iostream>
using namespace std;
using ll = long long;

ll powll(int x, int n) {
  ll res = 1;
  for ( int i = 0; i < n; ++i ) res *= x;
  return res;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << powll(A, B) + powll(B, A) << endl;
  return 0;
}
