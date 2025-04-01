#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  vector<string> chessboard(8);
  rep(i,8) {
    cin >> chessboard[i];
  }
  rep(i,8) {
    rep(j,8) {
      if ( chessboard[i][j] == '*' ) {
        cout << (char)('a'+j) << 8-i << ' ';
        return 0;
      }
    }
  }
  return 0;
}
