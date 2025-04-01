#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N-1);
  rep(i,N) cin >> A[i];
  rep(i,N) cin >> B[i];
  rep(i,N-1) cin >> C[i];
  int res = 0;
  rep(i,N) {
    res += B[A[i]-1];
    if ( i != 0 && A[i-1]+1 == A[i] ) res += C[A[i-1]-1];
  }
  cout << res << endl;
  return 0;
}
