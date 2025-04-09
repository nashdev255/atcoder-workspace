#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  vector<char> HDCS{ 'H', 'D', 'C', 'S' };
  vector<char> AK{ 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
  bool isAllHDCS = true, isAllAK = true, isAllDiff = true;
  unordered_map<string, int> cnts{};
  rep(i,N) {
    ++cnts[S[i]];
    bool isHDCS = false;
    rep(j,HDCS.size()) {
      if ( S[i][0] == HDCS[j] ) isHDCS = true;
    }
    if ( !isHDCS ) isAllHDCS = false;
    bool isAK = false;
    rep(j,AK.size()) {
      if ( S[i][1] == AK[j] ) isAK = true;
    }
    if ( !isAK ) isAllAK = false;
  }
  for ( auto& cnt : cnts ) {
    if ( cnt.second != 1 ) isAllDiff = false;
  }
  cout << ( ( isAllHDCS && isAllAK && isAllDiff ) ? "Yes" : "No" ) << endl;
  return 0;
}
