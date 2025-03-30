#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for ( auto& a : A ) cin >> a;
  for ( auto& b : B ) cin >> b;
  ll innerProduct = 0;
  for ( int i = 0; i < N; ++i ) innerProduct += A[i] * B[i];
  cout << ( innerProduct == 0 ? "Yes" : "No" ) << endl;
  return 0;
}
