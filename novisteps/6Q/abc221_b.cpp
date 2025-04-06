#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  const int N = S.size();
  if ( S == T ) {
    cout << "Yes" << endl;
    return 0;
  }
  rep(i,N-1) {
    string U(S);
    char tmp = U[i+1];
    U[i+1] = U[i];
    U[i] = tmp;
    if ( U == T ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
