#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  string S;
  vector<int> box(3, 0);
  cin >> N >> S;
  int x = 1;
  int res = 0;
  rep(i,N) {
    if ( S[i] == 'L' ) {
      if ( x != 1 ) --x;
    } else {
      if ( x != 3 ) {
        ++x;
        if ( x == 3 ) ++res;
      } else {
        ++res;
      }
    }
  }
  cout << res << endl;
  return 0;
}
