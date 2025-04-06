#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  for ( int i = 2; i <= N; ++i ) {
    int numberOfDivisor = 0;
    for ( int j = 1; j <= N; ++j ) {
      if ( i%j == 0 ) ++numberOfDivisor;
    }
    if ( numberOfDivisor == 2 ) {
      cout << i << ' ';
    }
  }
  return 0;
}
