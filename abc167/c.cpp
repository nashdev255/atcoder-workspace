#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<pair<int,vector<int>>> textbooks(N);
  for ( auto& textbook : textbooks ) {
    int c;
    cin >> c;
    textbook.first = c;
    rep(i,M) {
      int a;
      cin >> a;
      textbook.second.emplace_back(a);
    }
  }
  int minCost = 1e7;
  for ( int bit = 1; bit < (1<<N); bit++ ) {
    int cost = 0;
    vector<int> points(M);
    rep(i,N) {
      if ( bit & (1<<i) ) {
        cost += textbooks[i].first;
        rep(j,M) {
          points[j] += textbooks[i].second[j];
        }
      }
    }
    bool flg = true;
    rep(i,M) if ( points[i] < X ) flg = false;
    if ( flg ) minCost = min(minCost, cost);
  }
  cout << ( minCost == 1e7 ? -1 : minCost ) << endl;
  return 0;
}
