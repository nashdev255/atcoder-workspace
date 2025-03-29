#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> B(N), W(M);
  for ( auto& b : B ) cin >> b;
  for ( auto& w : W ) cin >> w;
  sort(B.begin(), B.end(), greater<ll>());
  sort(W.begin(), W.end(), greater<ll>());
  int numberOfBlackBalls = 0, numberOfWhiteBalls = 0;
  ll ans = 0;
  for ( auto& b : B ) {
    if ( b >= 0 ) {
      ans += b;
      numberOfBlackBalls++;
    }
  }
  for ( auto& w : W ) {
    if ( w > 0 ) {
      ans += w;
      numberOfWhiteBalls++;
    }
  }
  if ( numberOfBlackBalls < numberOfWhiteBalls ) {
    numberOfWhiteBalls = numberOfBlackBalls;
    ans = 0;
    for ( int i = 0; i < numberOfBlackBalls; i++ ) {
      ans += B[i];
      ans += W[i];
    }
    for ( int i = numberOfBlackBalls; i < min(N,M); i++ ) {
      ans = max(ans, ans + B[i] + W[i]);
    }
  }
  cout << ans << endl;
  return 0;
}
