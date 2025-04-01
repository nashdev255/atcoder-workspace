#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < n; ++i )
using namespace std;

bool isPalindromic(int n) {
  string S(to_string(n));
  bool flg = true;
  rep(i,S.size()/2) {
    if ( S[i] != S[S.size()-1-i] ) flg = false;
  }
  return flg;
}

int main() {
  int A, B;
  cin >> A >> B;
  int cnt = 0;
  for ( int i = A; i <= B; ++i ) {
    if ( isPalindromic(i) ) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
