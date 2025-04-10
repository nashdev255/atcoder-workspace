#include <iostream>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  unordered_map<int, int> cnts{};
  rep(i,N) {
    int K;
    cin >> K;
    rep(j,K) {
      int a;
      cin >> a;
      ++cnts[a];
    }
  }
  int res = 0;
  for ( auto& cnt : cnts ) {
    if ( cnt.second == N ) ++res;
  }
  cout << res << endl;
  return 0;
}
