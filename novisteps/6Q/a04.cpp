#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A;
  while ( N > 0 ) {
    if ( N%2 == 1 ) {
      N /= 2;
      A.emplace_back(1);
    } else {
      N /= 2;
      A.emplace_back(0);
    }
  }
  reverse(A.begin(), A.end());
  rep(i,10-A.size()) cout << 0;
  for ( auto& a : A ) cout << a;
  return 0;
}
