#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  A.insert(A.begin()+K, X);
  for ( auto& a : A ) cout << a << ' ';
  return 0;
}
