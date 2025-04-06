#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N;
  cin >> N;
  int res = 0;
  for ( int i = 1; i <= N; ++i ) {
    int numberOfDivisor = 0;
    for ( int j = 1; j <= N; ++j ) {
      if ( j%2 == 0 ) continue;
      if ( i%j == 0 ) ++numberOfDivisor;
    }
    if ( numberOfDivisor == 8 ) ++res;
  }
  cout << res << endl;
  return 0;
}
