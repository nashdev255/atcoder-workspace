#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<vector<int>> X(N, vector<int>(M));
  rep(i,M) cin >> A[i];
  rep(i,N) {
    rep(j,M) cin >> X[i][j];
  }
  bool res = true;
  rep(i,M) {
    int sum = 0;
    rep(j,N) sum += X[j][i];
    if ( sum < A[i] ) {
      res = false;
      break;
    }
  }
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
