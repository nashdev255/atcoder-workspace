#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  rep(i,H) {
    rep(j,W) {
      cin >> A[i][j];
    }
  }
  rep(i,H) {
    rep(j,W) {
      if ( A[i][j] == 0 ) cout << '.';
      else cout << (char)('A'+A[i][j]-1);
    }
    cout << endl;
  }
  return 0;
}
