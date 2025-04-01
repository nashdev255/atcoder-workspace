#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int res = -1;
  rep(i,N-2) {
    if ( S.substr(i, 3) == "ABC" ) {
      res = i + 1;
      break;
    }
  }
  cout << res << endl;
  return 0;
}
