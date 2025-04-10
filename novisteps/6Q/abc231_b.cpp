#include <iostream>
#include <string>
#include <map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, int> cnts{};
  rep(i,N) {
    string s;
    cin >> s;
    ++cnts[s];
  }
  int maxcnt = 0;
  for ( auto& cnt : cnts ) maxcnt = max(maxcnt, cnt.second);
  for ( auto& cnt : cnts ) {
    if ( cnt.second == maxcnt ) {
      cout << cnt.first << endl;
      return 0;
    }
  }
  return 0;
}
