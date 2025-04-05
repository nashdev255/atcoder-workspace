#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int res = 0;
  while ( true ) {
    bool isAllEven = true;
    rep(i,N) {
      if ( A[i]%2 != 0 ) {
        isAllEven = false;
        break;
      }
    }
    if ( isAllEven ) {
      ++res;
      rep(i,N) {
        A[i] /= 2;
      }
    } else {
      break;
    }
  }
  cout << res << endl;
  return 0;
}
