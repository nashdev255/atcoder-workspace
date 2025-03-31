#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  for ( int i = 1; i <= N; ++i ) A[i-1] = i;
  reverse(A.begin()+L-1, A.begin()+R);
  for ( auto& a : A ) cout << a << ' ';
  return 0;
}
