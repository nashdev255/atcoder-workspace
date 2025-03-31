#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  for ( auto& p : P ) cin >> p;
  int maxPrice = *max_element(P.begin(), P.end());
  int sum = 0;
  bool isTicketValid = true;
  for ( int i = 0; i < N; i++ ) {
    if ( P[i] == maxPrice && isTicketValid ) {
      sum += P[i] / 2;
      isTicketValid = false;
    } else sum += P[i];
  }
  cout << sum << endl;
  return 0;
}
