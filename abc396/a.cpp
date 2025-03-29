#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  int maxcnt = 0, cnt = 0, pre;
  for ( int i = 0; i < N; i++ ) {
    if ( i == 0 ) {
      pre = A[i];
      cnt++;
      continue;
    }
    if ( pre == A[i] ) {
      cnt++;
    } else {
      maxcnt = max(maxcnt, cnt);
      cnt = 1;
    }
    pre = A[i];
    if ( i == N - 1 ) maxcnt = max(maxcnt, cnt);
  }
  cout << ( maxcnt >= 3 ? "Yes" : "No" ) << endl;
  return 0;
}
