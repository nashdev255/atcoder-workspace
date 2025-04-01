#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N*7);
  rep(i,N*7) cin >> A[i];
  int cnt =  0;
  rep(i,N*7) {
    cnt += A[i];
    if ( (i+1)%7 == 0 ) {
      cout << cnt << ' ';
      cnt = 0;
    }
  }
  return 0;
}
