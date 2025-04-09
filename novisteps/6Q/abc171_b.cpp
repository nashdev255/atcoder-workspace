#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> p(N);
  rep(i,N) cin >> p[i];
  sort(p.begin(), p.end());
  int res = 0;
  rep(i,K) res += p[i];
  cout << res << endl;
  return 0;
}
