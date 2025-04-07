#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> A;
  for ( int i = 0; i < 100; ++i ) {
    int a;
    cin >> a;
    A.emplace_back(a);
    if ( a == 0 ) break;
  }
  const int N = A.size();
  reverse(A.begin(), A.end());
  for ( auto& a : A ) cout << a << endl;
  return 0;
}
