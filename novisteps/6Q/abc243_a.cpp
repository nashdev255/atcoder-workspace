#include <iostream>
#include <vector>
using namespace std;

int main() {
  int V, A, B, C;
  cin >> V >> A >> B >> C;
  vector<char> who({'F', 'M', 'T'});
  vector<int> costs({A, B, C});
  int it = 0;
  while ( V > 0 ) {
    if ( V < costs[it%3] ) break;
    V -= costs[it%3];
    ++it;
  }
  cout << who[it%3] << endl;
  return 0;
}
