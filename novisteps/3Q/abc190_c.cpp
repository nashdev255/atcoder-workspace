#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M;
  vector<int> A(M), B(M);
  rep(i,M) cin >> A[i] >> B[i];
  cin >> K;
  vector<int> C(K), D(K);
  rep(i,K) cin >> C[i] >> D[i];
  int res = 0;
  for ( int bit = 0; bit < (1<<K); ++bit ) {
    vector<int> dishes(N, 0);
    rep(i,K) {
      if ( bit & (1<<i) ) ++dishes[C[i]-1];
      else ++dishes[D[i]-1];
    }
    int cnt = 0;
    rep(i,M) if ( 1 <= dishes[A[i]-1] && 1 <= dishes[B[i]-1] ) ++cnt;
    res = max(res, cnt);
  }
  cout << res << endl;
  return 0;
}
