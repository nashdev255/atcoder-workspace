#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> A(N, vector<char>(N)), B(N, vector<char>(N));
  rep(i,N) {
    rep(j,N) {
      cin >> A[i][j];
    }
  }
  rep(i,N) {
    rep(j,N) {
      cin >> B[i][j];
    }
  }
  rep(i,N) {
    rep(j,N) {
      if ( A[i][j] != B[i][j] ) {
        cout << i+1 << ' ' << j+1 << endl;
        return 0;
      }
    }
  }
  return 0;
}
