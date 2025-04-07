#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, T, P;
  cin >> N >> T >> P;
  vector<int> L(N);
  rep(i,N) cin >> L[i];
  rep(i,100) {
    int cnt = 0;
    rep(j,N) {
      if ( L[j] >= T ) ++cnt;
    }
    if ( P <= cnt ) {
      cout << i << endl;
      return 0;
    }
    rep(j,N) ++L[j];
  }
  return 0;
}
