#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  --X; --Y;
  vector<string> S(H);
  rep(i,H) cin >> S[i];
  int res = 1;
  for ( int i = X+1; i < H && S[i][Y] != '#'; ++i ) ++res;
  for ( int i = X-1; i >= 0 && S[i][Y] != '#'; --i ) ++res;
  for ( int i = Y+1; i < W && S[X][i] != '#'; ++i ) ++res;
  for ( int i = Y-1; i >= 0 && S[X][i] != '#'; --i ) ++res;
  cout << res << endl;
  return 0;
}
