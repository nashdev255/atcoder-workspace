#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  if ( N % 2 == 1 ) {
    cout << "No" << endl;
    return 0;
  }
  bool flg = true;
  for ( int i = 0; i < N/2; ++i ) {
    if ( S[i] != S[i+N/2] ) {
      flg = false;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
