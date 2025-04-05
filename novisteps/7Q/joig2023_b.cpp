#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  rep(i,N-1) {
    rep(j,N-i-1) A.emplace_back(abs(A[j]-A[j+1]));
    A.erase(A.begin(), A.begin()+N-i);
  }
  cout << A[0] << endl;
  return 0;
}
