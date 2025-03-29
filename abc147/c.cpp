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
  vector<vector<pair<int,int>>> witnesses(N);
  for ( auto& witness : witnesses ) {
    int a;
    cin >> a;
    rep(i,a) {
      int x, y;
      cin >> x >> y;
      witness.emplace_back(pair<int,int>(x,y));
    }
  }
  int ans = 0;
  for ( int bit = 0; bit < (1<<N); bit++ ) {
    bool isConflicted = false;
    int numberOfHonestPerson = 0;
    rep(i,N) {
      if ( bit & (1<<i) ) {
        numberOfHonestPerson++;
        for ( auto& testimony : witnesses[i] ) {
          if ( testimony.second == 1 ) {
            if ( !( bit & (1<<(testimony.first-1)) ) ) {
              isConflicted = true;
            }
          }
          if ( testimony.second == 0 ) {
            if ( bit & (1<<(testimony.first-1)) ) {
              isConflicted = true;
            }
          }
        }
      }
    }
    if ( !isConflicted ) ans = max(ans,numberOfHonestPerson);
  }
  cout << ans << endl;
  return 0;
}
