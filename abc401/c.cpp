#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9;

/* 未AC */
int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> B(N+2);
  B[0] = 0;
  ll res = 1;
  rep(i,N+1) {
    if ( 0 <= i && i < K ) res = 1;
    else res = B[i]-B[i-K];
    B[i+1] = B[i]+res;
  }
  cout << res%MOD << endl;
  return 0;
}
