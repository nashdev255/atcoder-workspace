#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

bool isEvenString(const string& s) {
  const int n = s.size();
  if ( n%2 == 1 ) return false;
  bool res = true;
  for ( int i = 0; i < n/2; ++i ) {
    if ( s[i] != s[i+n/2] ) {
      res = false;
      break;
    }
  }
  return res;
}

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  rep(i,N) {
    S.erase(S.size()-1, 1);
    if ( isEvenString(S) ) {
      cout << S.size() << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
