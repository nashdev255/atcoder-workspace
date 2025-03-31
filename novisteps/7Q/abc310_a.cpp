#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for ( auto& d : D ) cin >> d;
  int minPrice = *min_element(D.begin(), D.end());
  cout << min(P, minPrice + Q) << endl;
  return 0;
}
