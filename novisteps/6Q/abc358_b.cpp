#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  vector<int> T(N);
  rep(i,N) cin >> T[i];
  int procedureTime = 0;
  rep(i,N) {
    cout << T[i]+A+procedureTime << endl;
    procedureTime += A;
    if ( i < N-1 ) procedureTime -= T[i+1]-T[i];
    if ( procedureTime < 0 ) procedureTime = 0;
  }
  return 0;
}
