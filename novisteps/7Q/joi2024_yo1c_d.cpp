#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int K, N, M;
  cin >> K >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  cin >> M;
  vector<int> B(M);
  rep(i,M) cin >> B[i];
  int res = 0;
  rep(p,N) {
    rep(q,M) {
      if ( A[p] + K == B[q] ) ++res;
    }
  }
  cout << res << endl;
  return 0;
}
