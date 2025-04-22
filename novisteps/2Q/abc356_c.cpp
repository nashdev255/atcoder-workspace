#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  vector<vector<int>> A(M);
  vector<char> R(M);
  rep(i,M) {
    int c;
    cin >> c;
    rep(j,c) {
      int a;
      cin >> a;
      A[i].emplace_back(a);
    }
    cin >> R[i];
  }
  int res = 0;
  rep(bit,(1<<N)) {
    bool isCongruent = true;
    rep(i,M) {
      int cnt = 0;
      for ( auto& a : A[i] ) {
        rep(i,N) {
          if ( bit & (1<<i) && a == i+1 ) ++cnt;
        }
      }
      if ( K <= cnt && R[i] == 'x' ) isCongruent = false;
      else if ( cnt < K && R[i] == 'o' ) isCongruent = false;
    }
    if ( isCongruent ) ++res;
  }
  cout << res << endl;
  return 0;
}
