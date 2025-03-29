#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

ll numberOfSnakeNumbers(ll n);
ll power(ll x, int n);

int main() {
  ll L, R;
  cin >> L >> R;
  cout << numberOfSnakeNumbers(R) - numberOfSnakeNumbers(L-1) << endl;
  return 0;
}

ll numberOfSnakeNumbers(ll n) {
  vector<int> digits;
  for ( auto& c : to_string(n) ) digits.emplace_back(c-'0');
  const int numberOfDigits = digits.size();
  const int msd = digits[0];

  ll res = 0;
  for ( int i = 1; i < numberOfDigits; i++ ) {
    for ( int j = 1; j <= 9; j++ ) res += power(j, i-1);
  }

  for (int i = 1; i < msd; i++) res += power(i, numberOfDigits-1);

  return res;
}

ll power(ll x, int n) {
  int k = 1;
  for ( int i = 0; i < n; i++ ) k *= x;
  return k;
}
