#include <iostream>
#include <string>
#include <vector>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<set<char>> S(N);
  rep(i,N) {
    string s;
    cin >> s;
    rep(j,s.size()) S[i].emplace(s[j]);
  }
  int res = 0;
  rep(bit,(1<<N)) {
    vector<int> numberOfEachAlphabets(26);
    rep(i,N) {
      if ( bit & (1<<i) ) {
        for ( auto& s : S[i] ) ++numberOfEachAlphabets[(int)(s-'a')];
      }
    }
    int cnt = 0;
    rep(i,26) {
      if ( numberOfEachAlphabets[i] == K ) ++cnt;
    }
    res = max(res, cnt);
  }
  cout << res << endl;
  return 0;
}
