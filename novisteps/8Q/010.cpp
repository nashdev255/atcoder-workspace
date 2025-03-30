#include <iostream>
using namespace std;
using ll = long long;

ll factorial(int n) {
  ll res = 1;
  for ( int i = 1; i <= n; ++i ) res *= i;
  return res;
}

int main() {
  int N;
  cin >> N;
  cout << factorial(N) << endl;
  return 0;
}
