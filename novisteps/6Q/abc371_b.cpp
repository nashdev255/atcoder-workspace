#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<char> B(M);
  rep(i,M) cin >> A[i] >> B[i];
  vector<int> numberOfBoys(N, 0);
  vector<bool> bucket(M, false);
  rep(i,M) {
    if ( B[i] == 'M' ) {
      if ( numberOfBoys[A[i]-1] == 0 ) bucket[i] = true;
      ++numberOfBoys[A[i]-1];
    }
  }
  rep(i,M) cout << ( bucket[i] ? "Yes" : "No" ) << endl;
  return 0;
}
