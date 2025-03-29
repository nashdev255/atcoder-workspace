#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> T(N), L(N);
  for ( int i = 0; i < N; i++ ) {
    cin >> T[i] >> L[i];
  }
  for ( int k = 1; k <= D; k++ ) {
    vector<int> W(N);
    for ( int i = 0; i < N; i++ ) {
      W[i] = T[i] * ( L[i] + k );
    }
    const int maximumWeight = *max_element(W.begin(), W.end());
    cout << maximumWeight << endl;
  }
  return 0;
}
