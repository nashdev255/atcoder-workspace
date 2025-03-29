#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<pair<int,long double>> players(N);
  rep(i,N) {
    long double a, b;
    cin >> a >> b;
    players[i].first = i + 1;
    players[i].second = a / ( a + b );
  }
  ranges::stable_sort(players.begin(), players.end(), [](const pair<int,long double>& p, const pair<int,long double>& q) -> bool { return p.second > q.second; });
  for ( auto& player : players ) cout << player.first << ' ';
  return 0;
}
