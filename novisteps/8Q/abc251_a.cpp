#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  rep(i,6) cout << S[i%S.size()];
  return 0;
}
