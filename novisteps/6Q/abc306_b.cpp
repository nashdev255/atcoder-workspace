#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ull = unsigned long long;

int main() {
  const int N = 64;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  ull res = 0;
  rep(i,N) if ( A[i] == 1 ) res += (1LL<<i);
  cout << res << endl;
  return 0;
}
