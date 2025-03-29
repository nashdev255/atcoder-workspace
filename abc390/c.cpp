#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  unsigned int H, W;
  cin >> H >> W;
  int minRow = W-1, maxRow = 0, minCol = H-1, maxCol = 0;
  vector<string> S(H);
  for ( auto & s : S ) cin >> s;
  for ( int i = 0; i < H; i++ ) {
    for ( int j = 0; j < W; j++ ) {
      if ( S[i][j] == '#' ) {
        minCol = min(minCol, i);
        maxCol = max(maxCol, i);
        minRow = min(minRow, j);
        maxRow = max(maxRow, j);
      }
    }
  }
  bool canBecomeBlackRectangle = true;
  for ( int i = minCol; i <= maxCol; i++ ) {
    for ( int j = minRow; j <= maxRow; j++ ) {
      if ( S[i][j] == '.' ) canBecomeBlackRectangle = false;
    }
  }
  cout << ( canBecomeBlackRectangle ? "Yes" : "No" ) << endl;
  return 0;
}
