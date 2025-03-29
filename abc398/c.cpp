#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  vector<pair<int, int>> vec(N);
  for ( int i = 1; i <= N; i++ ) vec[i-1] = make_pair(i, A[i-1]);
  const auto comp = [](const pair<int, int>& p, const pair<int, int>& q) { return p.second > q.second; };
  sort(vec.begin(), vec.end(), comp);
  unordered_map<int,int> cnts;
  for ( auto& a : A ) ++cnts[a];
  vec.erase(
    remove_if(vec.begin(), vec.end(), [&](const pair<int, int>& p) { return cnts[p.second] > 1; }),
    vec.end()
  );
  if ( !vec.empty() ) cout << vec[0].first << endl;
  else cout << -1 << endl;
  return 0;
}

/* vector<pair<int,int>>を使用しない場合 */
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   for ( auto& a : A ) cin >> a;
//   unordered_map<int,int> cnts{};
//   for ( auto& a : A ) cnts[a]++;
//   int ans = -1, tmp = 0;
//   for ( int i = 0; i < N; i++ ) {
//     if ( cnts[A[i]] < 2 && tmp < A[i] ) {
//       tmp = max(tmp,A[i]);
//       ans = i+1;
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }
