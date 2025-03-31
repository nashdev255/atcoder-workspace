#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N-1);
  for ( auto& a : A ) cin >> a;
  for ( int i = 0; i < N-1; ++i ) B[i] = A[i] * A[i+1];
  for ( auto& b : B ) cout << b << ' ';
  return 0;
}
