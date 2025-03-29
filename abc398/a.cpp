#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  int N;
  cin >> N;
  string S(N,'-');
  if ( N % 2 == 0 ) {
    S[N/2-1] = '=';
    S[N/2] = '=';
  } else {
    S[N/2] = '=';
  }
  cout << S << endl;
  return 0;
}
