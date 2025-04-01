#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  cout << ( S.substr(0, 3) == "nas" ? "Yes" : "No" ) << endl;
  return 0;
}
