#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> points(N);
  rep(i,N) {
    int x, y;
    cin >> x >> y;
    points[i] = pair<int, int>(x, y);
  }
  double res = 1e8;
  for ( int i = 0; i < N-1; ++i ) {
    for ( int j = i+1; j < N; ++j ) {
      const double x_1 = points[i].first, y_1 = points[i].second;
      const double x_2 = points[j].first, y_2 = points[j].second;
      const double dist = sqrt(abs(x_2-x_1)*abs(x_2-x_1)+abs(y_2-y_1)*abs(y_2-y_1));
      res = min(res, dist);
    }
  }
  cout << fixed << setprecision(12) << res << endl;
  return 0;
}
