#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(), A.end());
  bool res = true;
  rep(i,N) {
    if ( A[i] != i+1 ) res = false;
  }
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
