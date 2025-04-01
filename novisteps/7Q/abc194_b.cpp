#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i,N) cin >> A[i] >> B[i];
  int res = 1e7;
  rep(i,N) {
    rep(j,N) {
      if ( i == j ) res = min(res, A[i]+B[j]);
      else res = min(res, max(A[i], B[j]));
    }
  }
  cout << res << endl;
  return 0;
}
