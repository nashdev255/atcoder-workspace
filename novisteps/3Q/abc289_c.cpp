#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> S(M);
  rep(i,M) {
    int c;
    cin >> c;
    rep(j,c) {
      int a;
      cin >> a;
      S[i].emplace_back(a);
    }
  }
  int res = 0;
  for ( int bit = 1; bit < (1<<M); ++bit ) {
    vector<bool> bucket(N, false);
    bool isIncludingX = true;
    rep(i,M) {
      if ( bit & (1<<i) ) {
        for ( auto& s : S[i] ) bucket[s-1] = true;
      }
    }
    rep(i,N) if ( !bucket[i] ) isIncludingX = false;
    if ( isIncludingX ) ++res;
  }
  cout << res << endl;
  return 0;
}
