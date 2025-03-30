#include <iostream>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int k;
  for ( int i = 1; i <= N; ++i ) {
    int p;
    cin >> p;
    if ( p == X ) k = i;
  }
  cout << k << endl;
  return 0;
}
