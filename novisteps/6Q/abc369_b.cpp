#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<char> S(N);
  rep(i,N) cin >> A[i] >> S[i];
  int rightHandPos = -1, leftHandPos = -1;
  rep(i,N) {
    if ( rightHandPos == -1 && S[i] == 'R' ) rightHandPos = A[i];
    if ( leftHandPos == -1 && S[i] == 'L' ) leftHandPos = A[i];
    if ( rightHandPos != -1 && leftHandPos != -1 ) break;
  }
  int fatigueLevel = 0;
  rep(i,N-1) {
    if ( S[i+1] == 'R' ) {
      fatigueLevel += abs(A[i+1]-rightHandPos);
      rightHandPos = A[i+1];
    } else {
      fatigueLevel += abs(A[i+1]-leftHandPos);
      leftHandPos = A[i+1];
    }
  }
  cout << fatigueLevel << endl;
  return 0;
}
