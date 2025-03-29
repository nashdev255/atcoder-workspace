#include <iostream>
#include <string>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  int N;
  string S;
  char c1, c2;
  cin >> N >> c1 >> c2;
  cin >> S;
  rep(i,N) {
    if ( S[i] != c1 ) {
      S[i] = c2;
    }
  }
  cout << S << endl;
  return 0;
}
