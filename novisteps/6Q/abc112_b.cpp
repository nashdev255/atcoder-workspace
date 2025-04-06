#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  int res = 0, cnt = 0;
  rep(i,N) {
    const char c = S[i];
    if ( c == 'A' || c == 'C' || c == 'G' || c == 'T' ) ++cnt;
    else cnt = 0;
    res = max(cnt, res);
  }
  cout << res << endl;
  return 0;
}
