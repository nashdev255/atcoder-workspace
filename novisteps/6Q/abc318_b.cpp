#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N), D(N);
  rep(i,N) cin >> A[i] >> B[i] >> C[i] >> D[i];
  vector<vector<int>> heatmap(101, vector<int>(101, 0));
  rep(i,N) {
    for ( int x = A[i]; x < B[i]; ++x ) {
      for ( int y = C[i]; y < D[i]; ++y ) ++heatmap[x][y];
    }
  }
  int res = 0;
  rep(i,101) {
    rep(j,101) {
      if ( 1 <= heatmap[i][j] ) ++res;
    }
  }
  cout << res << endl;
  return 0;
}
