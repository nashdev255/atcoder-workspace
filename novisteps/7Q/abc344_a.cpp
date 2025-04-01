#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  bool isInside = false;
  rep(i,S.size()) {
    if ( S[i] == '|' ) isInside = !isInside;
    if ( S[i] != '|' && !isInside ) cout << S[i];
  }
  return 0;
}
