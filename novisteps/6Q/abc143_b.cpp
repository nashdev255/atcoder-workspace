#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i,N) cin >> d[i];
  int res = 0;
  for ( int i = 0; i < N-1; ++i ) {
    for ( int j = i+1; j < N; ++j ) {
      const int x = d[i], y = d[j];
      const int tasteIndex = x * y;
      res += tasteIndex;
    }
  }
  cout << res << endl;
  return 0;
}
