#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  cin >> M;
  vector<int> B(M);
  rep(i,M) cin >> B[i];
  int res = 0;
  rep(i,N) {
    res += A[i];
    rep(j,M) {
      if ( res == B[j] ) res = 0;
    }
  }
  cout << res << endl;
  return 0;
}
