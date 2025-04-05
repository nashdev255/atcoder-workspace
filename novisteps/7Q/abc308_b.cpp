#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> C(N);
  vector<string> D(M);
  map<string, int> P;
  int P_0;
  rep(i,N) cin >> C[i];
  rep(i,M) cin >> D[i];
  cin >> P_0;
  rep(i,M) cin >> P[D[i]];
  int res = 0;
  rep(i,N) {
    if ( count(D.begin(), D.end(), C[i]) == 0 ) {
      res += P_0;
      continue;
    }
    res += P[C[i]];
  }
  cout << res << endl;
  return 0;
}
