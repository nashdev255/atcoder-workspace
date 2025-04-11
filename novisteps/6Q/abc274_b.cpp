#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> grid(H, vector<char>(W));
  rep(i,H) {
    rep(j,W) cin >> grid[i][j];
  }
  rep(i,W) {
    int sum = 0;
    rep(j,H) {
      if ( grid[j][i] == '#' ) ++sum;
    }
    cout << sum << ' ';
  }
  return 0;
}
