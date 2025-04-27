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
  int d, A, Y;
  cin >> d >> A >> Y;
  if ( d <= A && d <= Y ) {
    cout << "Draw" << endl;
  } else if ( d <= A ) {
    cout << "Winner" << endl;
  } else if ( d <= Y ) {
    cout << "Loser" << endl;
  } else {
    cout << "Draw" << endl;
  }
  return 0;
}
