#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> cnts(N, 0);
  rep(i,K) {
    int d;
    cin >> d;
    rep(j,d) {
      int a;
      cin >> a;
      ++cnts[a-1];
    }
  }
  int res = 0;
  rep(i,N) {
    if ( cnts[i] == 0 ) ++res;
  }
  cout << res << endl;
  return 0;
}
