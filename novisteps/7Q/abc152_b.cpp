#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string S, T;
  rep(i,a) S += to_string(b);
  rep(i,b) T += to_string(a);
  cout << ( S < T ? S : T ) << endl;
  return 0;
}
