#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> P(n);
  for ( auto& p : P ) cin >> p;
  int cnt = 0;
  for ( int i = 0; i < n-2; ++i ) {
    if ( min({P[i], P[i+1], P[i+2]}) < P[i+1] && P[i+1] < max({P[i], P[i+1], P[i+2]}) ) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}

// int main() {
//   int n;
//   cin >> n;
//   vector<int> P(n);
//   for ( auto& p : P ) cin >> p;
//   int cnt = 0;
//   for ( int i = 0; i < n-2; ++i ) {
//     vector<int> A(3);
//     A[0] = P[i];
//     A[1] = P[i+1];
//     A[2] = P[i+2];
//     sort(A.begin(), A.end());
//     if ( P[i+1] == A[1] ) ++cnt;
//   }
//   cout << cnt << endl;
//   return 0;
// }
