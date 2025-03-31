#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for ( auto& h : H ) cin >> h;
  int ans = -1;
  for ( int i = 0; i < N; ++i ) {
    if ( H[0] < H[i] ) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
