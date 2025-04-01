#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  rep(i,S.size()) {
    if ( S[i] == '6' ) S[i] = '9';
    else if ( S[i] == '9' ) S[i] = '6';
  }
  cout << S << endl;
  return 0;
}
