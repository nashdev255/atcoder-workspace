#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  vector<int> A(4);
  rep(i,4) cin >> A[i];
  cout << *min_element(A.begin(), A.end()) << endl;
  return 0;
}
