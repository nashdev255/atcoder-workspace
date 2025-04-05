#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  rep(i,N) cin >> H[i];
  int res = 1;
  for ( int i = 1; i < N; ++i ) {
    bool canWatchSea = true;
    for ( int j = 0; j < i; ++j ) {
      if ( H[i] < H[j] ) canWatchSea = false; 
    }
    if ( canWatchSea ) ++res;
  }
  cout << res << endl;
  return 0;
}
