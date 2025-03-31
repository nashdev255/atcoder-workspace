#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  vector<vector<int>> A(2, vector<int>(2));
  rep(i,2) {
    rep(j,2) {
      cin >> A[i][j];
    }
  }
  cout << A[R-1][C-1] << endl;
  return 0;
}
