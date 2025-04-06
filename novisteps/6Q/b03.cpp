#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  for ( int i = 0; i < N-2; ++i ) {
    for ( int j = i+1; j < N-1; ++j ) {
      for ( int k = j+1; k < N; ++k ) {
        if ( A[i]+A[j]+A[k] == 1000 ) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

// 全ての(i,j,k)の組み合わせを考える。
// 必要のない組み合わせを計算することがボトルネックとなるため、想定解法に対して計算量が重い
// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   rep(i,N) cin >> A[i];
//   rep(i,N) {
//     rep(j,N) {
//       if ( i == j ) continue;
//       rep(k,N) {
//         if ( j == k || i == k ) continue;
//         if ( A[i]+A[j]+A[k] == 1000 ) {
//           cout << "Yes" << endl;
//           return 0;
//         }
//       }
//     }
//   }
//   cout << "No" << endl;
//   return 0;
// }
