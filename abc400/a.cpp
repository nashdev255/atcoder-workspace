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
  int A;
  cin >> A;
  cout << ( 400%A == 0 ? 400/A : -1 ) << endl;
  return 0;
}
