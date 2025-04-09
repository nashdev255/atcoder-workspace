#include <iostream>
#include <unordered_map>
using namespace std;

int f(int n) {
  return ( n%2 == 0 ? n/2 : 3*n+1 );
}

int main() {
  int s;
  cin >> s;
  unordered_map<int, int> cnts{};
  ++cnts[s];
  for ( int i = 1; i < 1e8; ++i ) {
    s = f(s);
    ++cnts[s];
    if ( cnts[s] == 2 ) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
