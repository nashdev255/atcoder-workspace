#include <iostream>
#include <vector>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  rep(i,N) cin >> W[i];

  unordered_map<string, int> cnts;
  rep(i,N) ++cnts[W[i]];
  bool isAllOne = true;
  for ( auto& cnt : cnts ) {
    if ( cnt.second != 1 ) isAllOne = false;
  }

  bool isContinuous = true;
  rep(i,N-1) {
    if ( W[i][W[i].size()-1] != W[i+1][0] ) isContinuous = false;
  }

  cout << ( isAllOne && isContinuous ? "Yes" : "No" ) << endl;
  return 0;
}
