#include <iostream>
#define rep1(i,n) for ( int i = 1; i <= (n); ++i )
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  int res = 0;
  rep1(i,N) {
    rep1(j,N) {
      if ( i + j <= S ) ++res;
    }
  }
  cout << res << endl;
  return 0;
}
