#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  rep(i,A.size()-1) {
    if ( A[i]+1 < A[i+1] ) A.insert(A.begin()+1+i, A[i]+1);
    if ( A[i] > A[i+1]+1 ) A.insert(A.begin()+1+i, A[i]-1);
  }
  for ( auto& a : A ) cout << a << ' ';
  return 0;
}

// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   rep(i,N) cin >> A[i];
//   while ( true ) {
//     bool isAllElementDiffOne = true;
//     rep(i,A.size()-1) {
//       if ( abs(A[i+1]-A[i]) != 1 ) isAllElementDiffOne = false;
//     }
//     if ( isAllElementDiffOne ) break;
//     rep(i,A.size()-1) {
//       if ( abs(A[i+1]-A[i]) != 1 ) {
//         if ( A[i] < A[i+1] ) {
//           const int diff = abs(A[i+1]-A[i]);
//           rep(j,diff-1) {
//             A.insert(A.begin()+1+i+j, A[i]+j+1);
//           }
//         } else {
//           const int diff = abs(A[i+1]-A[i]);
//           rep(j,diff-1) {
//             A.insert(A.begin()+1+i+j, A[i]-j-1);
//           }
//         }
//         break;
//       }
//     }
//   }
//   for ( auto& a : A ) cout << a << ' ';
//   return 0;
// }
