#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int res = -1;
  rep(i,N) {
    rep(j,N) {
      res = max(res, abs(A[i]-A[j]));
    }
  }
  cout << res << endl;
  return 0;
}
