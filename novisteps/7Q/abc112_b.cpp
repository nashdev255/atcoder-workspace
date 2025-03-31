#include <iostream>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int ans = 1e6;
  for ( int i = 0; i < N; ++i ) {
    int c, t;
    cin >> c >> t;
    if ( t <= T ) ans = min(ans, c);
  }
  cout << ( ans == 1e6 ? "TLE" : to_string(ans) ) << endl;
  return 0;
}
