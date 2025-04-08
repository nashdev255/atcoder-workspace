#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> A{};
  S.erase(S.begin());
  const int l = S.size();
  int cnt = 0;
  rep(i,l) {
    if ( S[i] == '|' ) {
      A.emplace_back(cnt);
      cnt = 0;
    } else ++cnt;
  }
  for ( auto& a : A ) cout << a << ' ';
  return 0;
}
