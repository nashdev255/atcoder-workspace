#include <iostream>
#include <string>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  unordered_map<char, int> cnts;
  rep(i,N) ++cnts[S[i]];
  char diff;
  for ( auto& cnt : cnts ) {
    if ( cnt.second == 1 ) diff = cnt.first;
  }
  rep(i,N) {
    if ( S[i] == diff ) {
      cout << i+1 << endl;
      break;
    }
  }
  return 0;
}
