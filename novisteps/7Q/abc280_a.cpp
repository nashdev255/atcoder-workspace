#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> grid(H);
  rep(i,H) {
    cin >> grid[i];
  }
  int cnt = 0;
  rep(i,H) {
    rep(j,W) {
      if ( grid[i][j] == '#' ) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
