#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, C;
  cin >> N >> C;
  vector<int> T(N);
  rep(i,N) cin >> T[i];
  int res = 1, pre = T[0];
  for ( int i = 1; i < N; ++i ) {
    if ( T[i] - pre >= C ) {
      ++res;
      pre = T[i];
    }
  }
  cout << res << endl;
  return 0;
}
