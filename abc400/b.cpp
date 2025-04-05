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

ll powll(int x, int n) {
  ll res = 1;
  rep(i,n) res *= x;
  return res;
}

int main() {
  int N, M;
  cin >> N >> M;
  ll sum = 0;
  for ( int i = 0; i <= M; ++i ) {
    sum += powll(N, i);
    if ( sum > 1e9 ) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << sum << endl;
  return 0;
}
