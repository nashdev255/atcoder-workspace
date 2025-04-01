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
  int cnt = 0;
  rep(i,N) {
    rep(j,M) {
      if ( A[i] <= B[j] ) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
