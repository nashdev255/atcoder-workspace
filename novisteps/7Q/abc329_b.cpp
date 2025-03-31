#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  int maxnum = *max_element(A.begin(), A.end());
  sort(A.begin(), A.end(), greater<int>());
  for ( auto& a : A ) {
    if ( a != maxnum ) {
      cout << a << endl;
      break;
    }
  }
  return 0;
}
