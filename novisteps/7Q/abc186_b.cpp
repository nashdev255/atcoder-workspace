#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  int minnum = 1e3;
  rep(i,H) {
    rep(j,W) {
      cin >> A[i][j];
      minnum = min(minnum, A[i][j]);
    }
  }
  int cnt = 0;
  rep(i,H) {
    rep(j,W) {
      cnt += A[i][j] - minnum;
    }
  }
  cout << cnt << endl;
  return 0;
}
