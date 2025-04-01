#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;
  if ( A.size() > B.size() ) {
    cout << "GREATER" << endl;
  } else if ( A.size() < B.size() ) {
    cout << "LESS" << endl;
  } else if ( A == B ) {
    cout << "EQUAL" << endl;
  } else {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    vector<int> digitsA;
    vector<int> digitsB;
    for ( char c : A ) digitsA.emplace_back(c-'0');
    for ( char c : B ) digitsB.emplace_back(c-'0');
    bool eq = true;
    bool carryDown = false;
    rep(i,A.size()) {
      if ( carryDown ) {
        --A[i];
        carryDown = false;
      }
      if ( A[i] < B[i] ) carryDown = true;
    }
    if ( carryDown ) {
      cout << "LESS" << endl;
    } else {
      cout << "GREATER" << endl;
    }
  }
  return 0;
}
