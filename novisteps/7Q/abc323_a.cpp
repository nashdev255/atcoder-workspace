#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int flg = true;
  for ( int i = 1; i < S.size(); i += 2 ) {
    if ( S[i] == '1' ) {
      flg = false;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
