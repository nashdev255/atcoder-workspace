#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());
  int A = 0, B = 0;
  rep(i,N) {
    if ( i%2 == 0 ) A += a[i];
    else B += a[i];
  }
  const int res = A-B;
  cout << res << endl;
  return 0;
}
