#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  bool flg = false;
  if ( T.substr(0, S.size()) == S ) flg = true;
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
