#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N;
  vector<int> T(N);
  rep(i,N) cin >> T[i];
  cin >> M;
  vector<pair<int, int>> U(M);
  rep(i,M) {
    int p, x;
    cin >> p >> x;
    U[i] = pair<int, int>(p, x);
  }
  int totalTime = 0;
  rep(i,N) totalTime += T[i];
  rep(i,M) {
    const int reducedTime = totalTime - T[U[i].first-1] + U[i].second;
    cout << reducedTime << endl;
  }
  return 0;
}
