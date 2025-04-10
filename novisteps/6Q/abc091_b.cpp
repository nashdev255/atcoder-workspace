#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  set<string> kinds{};
  unordered_map<string, int> cnts_s{}, cnts_t{};
  cin >> N;
  rep(i,N) {
    string s;
    cin >> s;
    ++cnts_s[s];
    kinds.emplace(s);
  }
  cin >> M;
  rep(i,M) {
    string t;
    cin >> t;
    ++cnts_t[t];
    kinds.emplace(t);
  }
  int res = 0;
  for ( auto& kind : kinds ) {
    int cnt = 0;
    cnt += cnts_s[kind];
    cnt -= cnts_t[kind];
    res = max(res, cnt);
  }
  cout << res << endl;
  return 0;
}
