#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  vector<string> v(3);
  rep(i,3) cin >> v[i];
  cout << 'A' << v[1][0] << 'C' << endl;
  return 0;
}
