#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B;
  for ( auto& a : A ) cin >> a;
  for ( int i = N - K; i < N; ++i ) B.emplace_back(A[i]);
  for ( int i = 0; i < N - K; ++i ) B.emplace_back(A[i]);
  for ( auto& b : B ) cout << b << ' ';
  return 0;
}
