#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  for ( char c : s ) {
    if ( c == '0' ) cout << 1;
    else cout << 0;
  }
  return 0;
}
