#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W, S_i, S_j;
  string X;
  cin >> H >> W >> S_i >> S_j;
  vector<vector<char>> C(H, vector<char>(W));
  rep(i,H) {
    rep(j,W) cin >> C[i][j];
  }
  cin >> X;
  const int N = X.size();
  rep(i,N) {
    if ( X[i] == 'L' && S_j != 1 && C[S_i-1][S_j-2] == '.' ) --S_j;
    else if ( X[i] == 'R' && S_j != W && C[S_i-1][S_j] == '.' ) ++S_j;
    else if ( X[i] == 'U' && S_i != 1 && C[S_i-2][S_j-1] == '.' ) --S_i;
    else if ( X[i] == 'D' && S_i != H && C[S_i][S_j-1] == '.' ) ++S_i;
  }
  cout << S_i << ' ' << S_j << endl;
  return 0;
}
