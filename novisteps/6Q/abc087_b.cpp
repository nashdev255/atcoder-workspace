#include <iostream>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int res = 0;
  for ( int i = 0; i <= A; ++i) {
    for ( int j = 0; j <= B; ++j) {
      for ( int k = 0; k <= C; ++k) {
        if ( 500*i+100*j+50*k == X ) ++res;
      }
    }
  }
  cout << res << endl;
  return 0;
}
