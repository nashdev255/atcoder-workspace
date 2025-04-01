#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  rep(i,N) {
    if ( S[i]-'0' ) {
      if ( i%2 == 0 ) {
        cout << "Takahashi" << endl;
        return 0;
      } else {
        cout << "Aoki" << endl;
        return 0;
      }
    }
  }
  return 0;
}
