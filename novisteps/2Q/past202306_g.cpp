#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> a(M), b(M);
  rep(i,M) {
    int k;
    cin >> k;
    rep(j,k) {
      int ain, bin;
      cin >> ain >> bin;
      a[i].emplace_back(ain);
      b[i].emplace_back(bin);
    }
  }
  rep(bit,(1<<N)) {
    bool isAllExist = true;
    rep(i,M) {
      bool exist = false;
      const int s = a[i].size();
      rep(j,s) {
        if ( ( (bit>>(a[i][j]-1)) & 1 ) == b[i][j] ) exist = true; 
      }
      if ( !exist ) isAllExist = false;
    }
    if ( isAllExist ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
