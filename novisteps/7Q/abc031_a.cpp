#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool flg = true;
  for ( int i = 0; i < S.size()/2; ++i ) {
    if ( S[i] != S[S.size()-1-i] ) {
      flg = false;
      break;
    }
  }
  cout << ( flg ? "YES" : "NO" ) << endl;
  return 0;
}
