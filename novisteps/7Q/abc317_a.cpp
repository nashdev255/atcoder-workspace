#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, H, X;
  cin >> N >> H >> X;
  vector<int> P(N);
  for ( auto& p : P ) cin >> p;
  for ( int i = 0; i < N; ++i ) {
    if ( X <= H + P[i] ) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
