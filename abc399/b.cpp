#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  vector<int> tiers(N);
  for ( auto& p : P ) cin >> p;
  int r = 1;
  bool isAllZero = false;
  while ( !isAllZero ) {
    int x = *max_element(P.begin(), P.end());
    int k = count(P.begin(), P.end(), x);
    int i = 0;
    for ( auto& p : P ) {
      if ( p == x ) {
        tiers[i] = r;
        P[i] = 0;
      }
      i++;
    }
    r += k;
    bool flg = true;
    for ( auto& p : P ) {
      if ( p != 0 ) flg = false;
    }
    if ( flg ) isAllZero = true;
  }
  for ( auto& tier : tiers ) {
    cout << tier << endl;
  }
  return 0;
}
