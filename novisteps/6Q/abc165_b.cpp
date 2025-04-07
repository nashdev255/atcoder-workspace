#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  ll X;
  cin >> X;
  ll savings = 100;
  for ( int i = 0; i < 1e8; ++i ) {
    if ( X <= savings ) {
      cout << i << endl;
      break;
    }
    savings += savings*0.01;
  }
  return 0;
}
