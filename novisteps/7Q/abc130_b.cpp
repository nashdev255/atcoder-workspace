#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> L(N);
  rep(i,N) cin >> L[i];
  int d = 0;
  int res = 1;
  for ( int i = 2; i <= N+1; ++i ) {
    d += L[i-1-1];
    if ( X < d ) break;
    ++res;
  }
  cout << res << endl;
  return 0;
}
