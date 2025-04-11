#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  vector<vector<bool>> A(N, vector<bool>(M));
  rep(i,N) {
    rep(j,M) {
      if ( S[i][j] == 'o' ) A[i][j] = 1;
      if ( S[i][j] == 'x' ) A[i][j] = 0;
    }
  }
  int res = 0;
  for ( int i = 0; i < N-1; ++i ) {
    for ( int j = i+1; j < N; ++j ) {
      vector<bool> B(M, 0);
      rep(k,M) B[k] = B[k] | A[i][k];
      rep(k,M) B[k] = B[k] | A[j][k];
      bool flg = true;
      rep(k,M) if ( !B[k] ) flg = false;
      if ( flg ) ++res;
    }
  }
  cout << res << endl;
  return 0;
}
