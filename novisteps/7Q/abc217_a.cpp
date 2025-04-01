#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  cout << ( S < T ? "Yes" : "No" ) << endl;
  return 0;
}
