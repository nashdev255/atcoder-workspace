#include <iostream>
#include <string>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

constexpr long double pi = 3.141592653589793238462643383279;

int main() {
  int N;
  string T;
  cin >> N >> T;
  int x = 0, y = 0;
  double theta = 0;
  int cnt = 0;
  rep(i,N) {
    if ( T[i] == 'S' ) {
      x += (int)cos(theta);
      y += (int)sin(theta);
    } else {
      theta -= pi/2;
      !(++cnt%4)?theta=0:0; // 魔術
    }
  }
  cout << x << ' ' << y << endl;
  return 0;
}
