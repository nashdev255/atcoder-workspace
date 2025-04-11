#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> A(N, vector<char>(N));
  rep(i,N) rep(j,N) cin >> A[i][j];
  bool res = true;
  rep(i,N) {
    rep(j,N) {
      if ( A[i][j] == 'W' && A[j][i] == 'W' ) {
        res = false;
        break;
      }
      if ( A[i][j] == 'L' && A[j][i] == 'L' ) {
        res = false;
        break;
      }
      if ( A[i][j] == 'D' && A[j][i] != 'D' ) {
        res = false;
        break;
      } 
    }
  }
  cout << ( res ? "correct" : "incorrect" ) << endl;
  return 0;
}