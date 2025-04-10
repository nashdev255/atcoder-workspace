#include <iostream>
#include <map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> cnts{};
  rep(i,N) {
    int a;
    cin >> a;
    ++cnts[a];
  }
  int mincnt = 1e5;
  for ( auto& cnt : cnts ) mincnt = min(mincnt, cnt.second);
  int res = 1e5;
  for ( auto& cnt : cnts ) {
    if ( cnt.second == mincnt ) res = min(res, cnt.first);
  }
  cout << res << endl;
  return 0;
}
