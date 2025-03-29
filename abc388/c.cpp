#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  long numberOfCombination = 0;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  for ( auto& a : A ) {
    numberOfCombination += upper_bound(A.begin(), A.end(), a / 2) - A.begin();
  }
  cout << numberOfCombination << endl;
  return 0;
}
