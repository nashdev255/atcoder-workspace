#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  return 0;
}

/* 
  2025/04/19 リアタイ メモ
  i日目(1<=i<=N)について、
  すぬけ君の苦手な食材の中に食品j(1<=j<=M)の食材があるかどうかを二分探索(binary_search)する。
  ただし、O(N*M*log(N))でTLE。
  食品を大きさごとにソートし、二分探索ですぬけ君の苦手な食材があることが確定している食品を探し、
  そこまで探索することによってMを削減しようと思ったが失敗。
*/

// int main() {
//   int N, M;
//   cin >> N >> M;
//   vector<vector<int>> A(M);
//   vector<int> Asizes(N);
//   vector<int> B(N);
//   rep(i,M) {
//     int k;
//     cin >> k;
//     Asizes[i] = k;
//     rep(j,k) {
//       int a;
//       cin >> a;
//       A[i].emplace_back(a);
//     }
//   }
//   sort(A.begin(), A.end());
//   sort(A.begin(), A.end(), [](vector<int> p, vector<int> q) -> bool { return p.size() < q.size(); });
//   rep(i,N) cin >> B[i];
//   vector<int> dislikes{};
//   rep(i,N) dislikes.emplace_back(i+1);
//   int numberOfMealsHeCanEat = 0;
//   rep(i,N) {
//     dislikes.erase(dislikes.begin()+B[i]-1, dislikes.begin()+B[i]);
//     cout << "que:";
//     for ( auto& s : dislikes ) {
//       cout << s << ' ';
//     }
//     cout << endl;
//     auto pos = distance(Asizes.begin(), upper_bound(Asizes.begin(), Asizes.end(), M-i-1));
//     cout << pos << endl;
//     rep(j,pos) {
//       if ( binary_search(dislikes.begin(), dislikes.end(), A[i][j]) ) {
//         ++numberOfMealsHeCanEat;
//       }
//     }
//     cout << numberOfMealsHeCanEat << endl;
//   }
//   return 0;
// }
