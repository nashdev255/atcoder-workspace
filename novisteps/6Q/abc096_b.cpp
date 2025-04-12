#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  const int N = 3;
  vector<int> A(3);
  int K;
  rep(i,N) cin >> A[i];
  cin >> K;
  const int m = *max_element(A.begin(), A.end());
  rep(i,N) {
    if ( A[i] == m ) {
      A[i] *= (1<<K);
      break;
    }
  }
  int res = 0;
  rep(i,N) res += A[i];
  cout << res << endl;
  return 0;
}
