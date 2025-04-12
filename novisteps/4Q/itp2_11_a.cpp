#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> U(n);
  for ( int bit = 0; bit < (1<<n); ++bit ) {
    vector<int> subset{};
    for ( int i = 0; i < n; ++i ) {
      if ( bit & (1<<i) ) subset.emplace_back(i);
    }
    cout << bit << ':';
    for ( auto& s : subset ) cout << ' ' << s;
    cout << endl;
  }
  return 0;
}
