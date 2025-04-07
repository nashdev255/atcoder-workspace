#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int M;
  cin >> M;
  vector<int> D(M);
  int cnt = 0;
  rep(i,M) {
    cin >> D[i];
    cnt += D[i];
  }
  int mid = ceil(cnt/2);
  int a = 0, b = 0;
  rep(i,M) {
    if ( mid < D[i] ) {
      a = i+1;
      b = mid+1;
      break;
    } else {
      mid -= D[i];
    }
  }
  cout << a << ' ' << b << endl;
  return 0;
}
