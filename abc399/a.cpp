#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;
  int ans = 0;
  rep(i,N) {
    if ( S[i] != T[i] ) ans++;
  }
  cout << ans << endl;
  return 0;
}
