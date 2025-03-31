#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  --P; --Q; --R; --S;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  vector<int> B = A;
  const int dist = R-P;
  for ( int i = P; i <= Q; ++i ) B[i] = A[i+dist];
  for ( int i = R; i <= S; ++i ) B[i] = A[i-dist];
  for ( auto& b : B ) cout << b << ' ';
  return 0;
}
