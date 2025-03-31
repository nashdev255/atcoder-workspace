#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for ( auto& s : S ) cin >> s;
  reverse(S.begin(), S.end());
  for ( auto& s : S ) cout << s << endl;
  return 0;
}
