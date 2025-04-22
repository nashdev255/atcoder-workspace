#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<pair<int, int>>> testimonies(N);
  rep(i,N) {
    int a;
    cin >> a;
    rep(j,a) {
      int x, y;
      cin >> x >> y;
      testimonies[i].emplace_back(pair<int, int>(x, y));
    }
  }
  int res = 0;
  rep(bit,(1<<N)) {
    int cnt = 0;
    bool isAllHonest = true;
    rep(i,N) {
      if ( bit & (1<<i) ) {
        ++cnt;
        for ( auto& testimony : testimonies[i] ) {
          const int x = testimony.first;
          const int y = testimony.second;
          if ( y == 1 ) {
            if ( !( bit & (1<<(x-1)) ) ) isAllHonest = false;
          } else {
            if ( ( bit & (1<<(x-1)) ) ) isAllHonest = false;
          }
        }
      }
    }
    if ( isAllHonest ) res = max(res, cnt);
  }
  cout << res << endl;
  return 0;
}
