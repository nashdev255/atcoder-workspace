#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<int>());
  const bool res = ( s < t );
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
