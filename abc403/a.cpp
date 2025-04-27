#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int res = 0;
  for ( int i = 0; i < N; i+=2 ) res += A[i];
  cout << res << endl;
  return 0;
}
