#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

ll powll(int x, int n);

int main() {
  int K;
  cin >> K;
  vector<int> digits;
  vector<ll> likenumbers;
  rep(i,10) digits.emplace_back(i);
  for ( int bit = 1; bit < (1<<10); ++bit ) {
    ll likenumber = 0;
    int cnt = 0;
    rep(i,10) {
      if ( bit & (1<<i) ) {
        likenumber += digits[i] * powll(10,cnt);
        ++cnt;
      }
    }
    likenumbers.emplace_back(likenumber);
  }
  sort(likenumbers.begin(), likenumbers.end());
  cout << likenumbers[K] << endl;
  return 0;
}

ll powll(int x, int n) {
  ll ret = 1;
  rep(i,n) ret *= x;
  return ret;
}
