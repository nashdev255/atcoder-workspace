#include <iostream>
using namespace std;
using ll = long long;

int main() {
  int N, S, K;
  cin >> N >> S >> K;
  ll sum = 0;
  for ( int i = 0; i < N; ++i ) {
    int p, q;
    cin >> p >> q;
    sum += p * q;
  }
  if ( sum < S ) sum += K;
  cout << sum << endl;
  return 0;
}
