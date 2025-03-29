#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  return 0;
}

/*
 * 連続している区間の長さを列挙して、その区間で表現される値を加算する
 * 要素数が1のとき、rep(i,N-1)が機能しなくなるため、一般的ではない
*/
// ll powll(int x, int n);

// int main() {
//   string S;
//   cin >> S;
//   if ( S.size() == 1 ) {
//     cout << S << endl;
//     return 0;
//   }
//   const int N = S.size();
//   vector<int> digits;
//   for ( auto& c : S ) digits.emplace_back(c-'0');
//   ll ans = 0;
//   for ( int bit = 0; bit < (1<<(N-1)); bit++ ) {
//     vector<int> continuities;
//     int cnt = 1;
//     rep(i,N-1) {
//       if ( bit & (1<<i) ) {
//         continuities.emplace_back(cnt);
//         cnt = 1;
//         if ( i == N-2 ) continuities.emplace_back(1);
//       } else {
//         cnt++;
//         if ( i == N-2 ) continuities.emplace_back(cnt);
//       }
//     }
//     int it = 0;
//     for ( auto& continuity : continuities ) {
//       ll sum = 0;
//       rep(i,continuity) {
//         sum += digits[it+i] * powll(10, continuity-i-1);
//       }
//       it += continuity;
//       ans += sum;
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }

// ll powll(int x, int n) {
//   ll ret = 1;
//   rep(i,n) ret *= x;
//   return ret;
// }
