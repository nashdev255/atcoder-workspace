#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> T(Q);
  rep(i,Q) cin >> T[i];
  vector<bool> teeth(N, true);
  int res = N;
  rep(i,Q) {
    if ( teeth[T[i]-1] ) {
      --res;
      teeth[T[i]-1] = false;
    } else {
      ++res;
      teeth[T[i]-1] = true;
    }
  }
  cout << res << endl;
  return 0;
}
