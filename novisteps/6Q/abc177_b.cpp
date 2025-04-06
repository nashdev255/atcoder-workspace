#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

/*
* @param string s 文字列
* @param string t sと等しい長さの文字列
* @return int 2つの文字列のハミング距離
*/
int getHammingDistance(const string& s, const string t) {
  if ( s.size() != t.size() ) return -1;
  const int n = s.size();
  int res = 0;
  for ( int i = 0; i < n; ++i ) {
    if ( s[i] != t[i] ) ++res;
  }
  return res;
}

int main() {
  string S, T;
  cin >> S >> T;
  const int N = S.size(), M = T.size();
  int res = 1e4;
  rep(i,N-M+1) {
    const int dist = getHammingDistance(S.substr(i, M), T);
    res = min(res, dist); 
  }
  cout << res << endl;
  return 0;
}
