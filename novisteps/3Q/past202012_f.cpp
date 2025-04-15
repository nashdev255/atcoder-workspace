#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M), C(M);
  rep(i,M) cin >> A[i] >> B[i] >> C[i];
  int res = 0;
  for ( int bit = 1; bit < (1<<N); ++bit ) {
    vector<int> chemicals{};
    rep(i,N) {
      if ( bit & (1<<i) ) chemicals.emplace_back(i+1);
    }
    set<int> dangerChemicals{};
    rep(i,M) {
      const int cntA = ranges::count(chemicals, A[i]);
      const int cntB = ranges::count(chemicals, B[i]);
      const int cntC = ranges::count(chemicals, C[i]);
      const int cnt = cntA + cntB + cntC;
      if ( cnt == 2 ) {
        if ( cntA == 0 ) dangerChemicals.emplace(A[i]);
        if ( cntB == 0 ) dangerChemicals.emplace(B[i]);
        if ( cntC == 0 ) dangerChemicals.emplace(C[i]);
      }
    }
    const int numberOfDangerChemicals = dangerChemicals.size();
    res = max(res, numberOfDangerChemicals);
  }
  cout << res << endl;
  return 0;
}
