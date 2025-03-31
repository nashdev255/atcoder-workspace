#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  bool flg = false;
  for ( int i = 0; i < N-1; ++i ) {
    if ( S[i] == 'a' && S[i+1] == 'b' ) {
      flg = true;
      break;
    }
    if ( S[i] == 'b' && S[i+1] == 'a' ) {
      flg = true;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
