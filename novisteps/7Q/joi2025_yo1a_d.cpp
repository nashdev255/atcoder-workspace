#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using ll = long long;
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];
  ll res = 0;
  rep(i,N) {
    rep(j,M) {
      res += (A[i]+B[j])*max(A[i], B[j]);
    }
  }
  cout << res << endl;
  return 0;
}
