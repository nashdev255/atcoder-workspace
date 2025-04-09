#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> l(N);
  rep(i,N) cin >> l[i];
  sort(l.begin(), l.end(), greater<int>());
  int res = 0;
  rep(i,K) res += l[i];
  cout << res << endl;
  return 0;
}
