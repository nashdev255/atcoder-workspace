#include <iostream>
#include <string>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  unordered_map<char, int> cnts;
  rep(i,S.size()) ++cnts[S[i]];
  bool isAllDifferent = true;
  for ( auto& cnt : cnts ) {
    if ( cnt.second >= 2 ) isAllDifferent = false;
  }
  cout << ( isAllDifferent ? "yes" : "no" ) << endl;
  return 0;
}
