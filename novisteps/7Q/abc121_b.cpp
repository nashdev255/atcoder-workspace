#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<vector<int>> A(N, vector<int>(M));
  vector<int> B(M);
  rep(i,M) cin >> B[i];
  rep(i,N) {
    rep(j,M) {
      cin >> A[i][j];
    }
  }
  int cnt = 0;
  rep(i,N) {
    int sum = C;
    rep(j,M) {
      sum += A[i][j] * B[j];
    }
    if ( sum > 0 ) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
