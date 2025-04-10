#include <iostream>
#include <vector>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];
  unordered_map<int, int> cnts{};
  rep(i,N) ++cnts[A[i]];
  rep(i,M) {
    if ( 0 < cnts[B[i]] ) {
      --cnts[B[i]];
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
