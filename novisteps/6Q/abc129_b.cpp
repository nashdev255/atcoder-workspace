#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> W(N);
  rep(i,N) cin >> W[i];
  int res = 1e8;
  rep(i,N) {
    int S_1 = 0, S_2 = 0;
    for ( int j = 0; j < i; ++j ) S_1 += W[j];
    for ( int j = i; j < N; ++j ) S_2 += W[j];
    res = min(res, abs(S_1-S_2));
  }
  cout << res << endl;
  return 0;
}
