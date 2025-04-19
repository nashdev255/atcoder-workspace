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
  string S;
  cin >> S;
  for ( auto& c : S ) {
    if ( 'A' <= c && c <= 'Z' ) cout << c;
  }
  return 0;
}
