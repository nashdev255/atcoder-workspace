#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

bool isPalindrome(string& S) {
  const int N = S.size();
  bool res = true;
  rep(i,N/2) {
    if ( S[i] != S[N-1-i] ) {
      res = false;
      break;
    }
  }
  return res;
}

int main() {
  string S;
  cin >> S;
  int longestPalindrome = 1;
  for ( int i = 0; i < S.size()-1; ++i ) {
    string T{};
    T += S[i];
    int cnt = 1;
    for ( int j = i+1; j < S.size(); ++j ) {
      T += S[j];
      if ( isPalindrome(T) ) cnt = T.size();
      longestPalindrome = max(longestPalindrome, cnt);
    }
  }
  cout << longestPalindrome << endl;
  return 0;
}
