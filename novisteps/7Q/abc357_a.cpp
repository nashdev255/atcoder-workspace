#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  for ( auto& h : H ) cin >> h;
  int i = 0;
  for ( ; i < N && M >= 0; ++i ) M -= H[i];
  if ( M < 0 ) cout << i-1 << endl;
  else cout << i << endl;
  return 0;
}
