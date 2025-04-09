#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> X(5*N);
  rep(i,5*N) cin >> X[i];
  sort(X.begin(), X.end());
  X.erase(X.begin(), X.begin()+N);
  sort(X.begin(), X.end(), greater<int>());
  X.erase(X.begin(), X.begin()+N);
  double res = 0;
  rep(i,3*N) res += X[i];
  res /= (3*N);
  cout << fixed << setprecision(6) << res << endl;
  return 0;
}
