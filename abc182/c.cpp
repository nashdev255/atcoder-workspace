#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

ll powll(int x, int n);

int main() {
  string N;
  cin >> N;
  const int k = N.size();
  vector<int> digits{};
  for ( char c : N ) digits.emplace_back(c-'0');
  int ans = 100;
  for ( int bit = 1; bit < (1<<k); bit++ ) {
    ll num = 0;
    int numberOfZeros = k;
    for ( int i = 0; i < k; i++ ) {
      if ( bit & (1<<i) ) {
        numberOfZeros--;
        num += digits[i] * powll(10, i);
      }
    }
    if ( num % 3 == 0 ) ans = min(ans, numberOfZeros);
  }
  cout << ( ans == 100 ? -1 : ans ) << endl;
  return 0;
}

ll powll(int x, int n) {
  ll ret = 1;
  for ( int i = 0; i < n; i++ ) ret *= x;
  return ret;
}
