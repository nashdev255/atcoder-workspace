#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  vector<string> S(8);
  rep(i,8) cin >> S[i];
  vector<vector<bool>> canEmplace(8, vector<bool>(8, true));
  rep(i,8) {
    rep(j,8) {
      if ( S[i][j] == '#' ) {
        rep(k,8) canEmplace[i][k] = false;
        rep(k,8) canEmplace[k][j] = false;
      }
    }
  }
  int res = 0;
  rep(i,8) {
    rep(j,8) {
      if ( canEmplace[i][j] && S[i][j] == '.' ) ++res;
    }
  }
  cout << res << endl;
  return 0;
}
