#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> points(N);
  rep(i,N) cin >> points[i].first >> points[i].second;
  rep(i,N) {
    double maxDistance = -1;
    int maxDistancePoint;
    rep(j,N) {
      const double X = abs(points[i].first-points[j].first);
      const double Y = abs(points[i].second-points[j].second);
      const double distance = sqrt(X*X+Y*Y);
      if ( maxDistance != max(maxDistance, distance) ) maxDistancePoint = j + 1;
      maxDistance = max(maxDistance, distance);
    }
    cout << maxDistancePoint << endl;
  }
  return 0;
}
