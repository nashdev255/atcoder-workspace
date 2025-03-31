#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  const int minCoordinate = *min_element(A.begin(), A.end());
  const int maxCoordinate = *max_element(A.begin(), A.end());
  const int travelDistance = maxCoordinate - minCoordinate;
  cout << travelDistance << endl;
  return 0;
}
