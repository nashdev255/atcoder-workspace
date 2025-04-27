#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string T, U;
  cin >> T >> U;
  const int N = T.size(), M = U.size();
  bool res = false;
  for ( int i = 0; i < N-M+1; ++i ) {
    bool isPartial = true;
    for ( int j = 0; j < M; ++j ) {
      if ( T[i+j] == '?' ) continue;
      else if ( T[i+j] != U[j] ) isPartial = false;
    }
    if ( isPartial ) {
      res = true;
      break;
    }
  }
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
