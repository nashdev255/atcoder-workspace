#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> T(N);
  for ( auto& t : T ) cin >> t;
  int ans = -1;
  for ( int i = 0; i < N-1; ++i ) {
    if ( T[i+1] - T[i] <= D ) {
      ans = T[i+1];
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
