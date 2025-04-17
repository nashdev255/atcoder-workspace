#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> relationships(N);
  rep(i,M) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    relationships[x].emplace_back(y);
    relationships[y].emplace_back(x);
  }
  int res = 0;
  for ( int bit = 1; bit < (1<<N); ++bit ) {
    vector<int> members{};
    rep(i,N) {
      if ( bit & (1<<i) ) members.emplace_back(i);
    }
    const int numberOfMember = members.size();
    bool isAllAcquainted = true;
    rep(i,N) {
      if ( bit & (1<<i) ) {
        vector<int> subMembers(members);
        subMembers.erase(find(subMembers.begin(), subMembers.end(), i));
        rep(j,subMembers.size()) {
          if ( count(relationships[i].begin(), relationships[i].end(), subMembers[j]) == 0 ) isAllAcquainted = false;
        }
      }
    }
    if ( isAllAcquainted ) res = max(res, numberOfMember);
  }
  cout << res << endl;
  return 0;
}
