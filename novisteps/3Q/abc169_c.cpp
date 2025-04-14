#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M));
  rep(i,N) {
    cin >> C[i];
    rep(j,M) cin >> A[i][j];
  }
  int res = 1e7;
  for ( int bit = 0; bit < (1<<N); ++bit ) {
    vector<int> levels(M, 0);
    int totalPrice = 0;
    bool isAllUnderstanded = true;
    rep(i,N) {
      if ( bit & (1<<i) ) {
        rep(j,M) levels[j] += A[i][j];
        totalPrice += C[i];
      }
    }
    rep(i,M) {
      if ( levels[i] < X ) isAllUnderstanded = false;
    }
    if ( isAllUnderstanded ) res = min(res, totalPrice);
  }
  cout << ( res == 1e7 ? -1 : res ) << endl;
  return 0;
}
