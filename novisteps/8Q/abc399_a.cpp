#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;
  int ans = 0;
  for ( int i = 0; i < N; ++i ) {
    if ( S[i] != T[i] ) ++ans;
  }
  cout << ans << endl;
  return 0;
}
