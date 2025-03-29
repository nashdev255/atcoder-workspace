#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for ( auto& s : S ) cin >> s;
  auto c = [&](string& s1, string& s2) {
    return (s1.size() < s2.size());
  };
  sort(S.begin(), S.end(), c);
  for ( auto& s : S ) {
    cout << s;
  }
  cout << endl;
  return 0;
}
