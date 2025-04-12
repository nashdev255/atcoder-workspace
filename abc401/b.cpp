#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  bool isLogin = false;
  int res = 0;
  rep(i,N) {
    if ( S[i] == "login" ) isLogin = true;
    else if ( S[i] == "logout" ) isLogin = false;
    if ( S[i] == "private" && !isLogin ) ++res;
  }
  cout << res << endl;
  return 0;
}
