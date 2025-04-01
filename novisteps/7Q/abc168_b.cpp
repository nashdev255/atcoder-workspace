#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int K;
  string S;
  cin >> K >> S;
  if ( S.size() <= K ) {
    cout << S << endl;
  } else {
    cout << S.substr(0, K) + "..." << endl;
  }
  return 0;
}
