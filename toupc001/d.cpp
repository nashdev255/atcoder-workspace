#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N, k;
  string S;
  cin >> N >> k >> S;
  vector<int> turningPoints{};
  turningPoints.emplace_back(-1);
  rep(i,N-1) {
    const string subset(S.substr(i,2));
    if ( subset == "AB" || subset == "BA" ) turningPoints.emplace_back(i);
  }
  turningPoints.emplace_back(N-1);
  vector<int> lengthOfContinuity{};
  rep(i, turningPoints.size()-1) lengthOfContinuity.emplace_back(turningPoints[i+1]-turningPoints[i]);
  int res = 0;
  rep(i,lengthOfContinuity.size()) res += lengthOfContinuity[i]/k;
  cout << res << endl;
  return 0;
}
