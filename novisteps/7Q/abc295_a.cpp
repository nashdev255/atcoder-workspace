#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  vector<string> S = {"and", "not", "that", "the", "you"};
  for ( auto& w : W ) cin >> w;
  for ( auto& s : S ) {
    for ( auto& w : W ) {
      if ( s == w ) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
