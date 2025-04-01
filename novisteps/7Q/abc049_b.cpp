#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> C(H, vector<char>(W));
  rep(i,H) {
    rep(j,W) {
      cin >> C[i][j];
    }
  }
  rep(i,H) {
    rep(j,W) {
      cout << C[i][j];
    }
    cout << endl;
    rep(j,W) {
      cout << C[i][j];
    }
    cout << endl;
  }
  return 0;
}
