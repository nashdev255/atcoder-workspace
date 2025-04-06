#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

bool isAcendingOrder(vector<int>& v) {
  const int N = v.size();
  bool res = true;
  for ( int i = 0; i < N-1; ++i ) {
    if ( v[i] >= v[i+1] ) {
      res = false;
      break;
    }
  }
  return res;
}

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  rep(i,N) cin >> p[i];
  if ( isAcendingOrder(p) ) {
    cout << "YES" << endl;
    return 0;
  }
  for ( int i = 0; i < N-1; ++i ) {
    for ( int j = i+1; j < N; ++j ) {
      vector<int> q(p);
      int tmp = q[i];
      q[i] = q[j];
      q[j] = tmp;
      if ( isAcendingOrder(q) ) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
