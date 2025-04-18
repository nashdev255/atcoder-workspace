#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  rep(i,H) rep(j,W) cin >> A[i][j];
  bool res = true;
  rep(i,H-1) {
    rep(j,W-1) {
      if ( A[i+1][j]+A[i][j+1] < A[i][j]+A[i+1][j+1] ) res = false;
    }
  }
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
