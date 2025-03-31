#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for ( auto& h : H ) cin >> h;
  int i = 0;
  for ( ; H[i] < H[i+1] && i != N-1; ++i );
  cout << H[i] << endl;
  return 0;
}
