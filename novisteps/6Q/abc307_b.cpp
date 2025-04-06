#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

/*
* @param string s 文字列
* @return bool 文字列が回文であるかどうか
*/
bool isPalindrome(const string& s) {
  const int n = s.size();
  bool res = true;
  for ( int i = 0; i < n/2; ++i ) {
    if ( s[i] != s[n-1-i] ) {
      res = false;
      break;
    }
  }
  return res;
}

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  rep(i,N) {
    rep(j,N) {
      if ( i == j ) continue;
      if ( isPalindrome(S[i]+S[j]) ) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
