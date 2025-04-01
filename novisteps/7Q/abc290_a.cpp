#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];
  int res = 0;
  rep(i,M) {
    res += A[B[i]-1];
  }
  cout << res << endl;
  return 0;
}
