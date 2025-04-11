#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  rep(i,H) cin >> S[i];
  rep(i,H) {
    rep(j,W) {
      if ( S[i][j] == '.' ) {
        int cnt = 0;
        if ( ( i != 0 && j != 0 ) && S[i-1][j-1] == '#' ) ++cnt;
        if ( ( i != 0 ) && S[i-1][j] == '#' ) ++cnt;
        if ( ( i != 0 && j != W-1 ) && S[i-1][j+1] == '#' ) ++cnt;
        if ( ( j != 0 ) && S[i][j-1] == '#' ) ++cnt;
        if ( ( j != W-1 ) && S[i][j+1] == '#' ) ++cnt;
        if ( ( i != H-1 && j != 0 ) && S[i+1][j-1] == '#' ) ++cnt;
        if ( ( i != H-1 ) && S[i+1][j] == '#' ) ++cnt;
        if ( ( i != H-1 && j != W-1 ) && S[i+1][j+1] == '#' ) ++cnt;
        S[i][j] = (char)('0'+cnt);
      }
    }
  }
  rep(i,H) {
    rep(j,W) cout << S[i][j];
    cout << endl;
  }
  return 0;
}
