#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  vector<vector<char>> c(3, vector<char>(3));
  rep(i,3) {
    rep(j,3) {
      cin >> c[i][j];
    }
  }
  rep(i,3) {
    cout << c[i][i];
  }
  return 0;
}
