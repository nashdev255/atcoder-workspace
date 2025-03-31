#include <iostream>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int sum = 0;
  int minWeight = 1e6;
  for ( int i = 0; i < N; ++i ) {
    int m;
    cin >> m;
    sum += m;
    minWeight = min(minWeight, m);
  }
  cout << N + ( X - sum ) / minWeight << endl;
  return 0;
}
