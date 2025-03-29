#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B;
  for ( auto& a : A ) cin >> a;
  sort(A.begin(), A.end());
  auto it = A.begin();
  for ( int i = 1; i <= N; i++ ) {
    if ( *it < i && it != A.end() ) it++;
    if ( *it == i ) continue;
    B.emplace_back(i);
  }
  cout << B.size() << endl;
  for ( auto& b : B ) {
    cout << b;
    if ( *(B.end()-1) == b ) {
      cout << endl;
    } else {
      cout << ' ';
    }
  }
  return 0;
}
