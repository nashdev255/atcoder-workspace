#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for ( auto& h : H ) cin >> h;
  int highest = *max_element(H.begin(), H.end());
  for ( int i = 0; i < N; i++ ) {
    if ( H[i] == highest ) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
