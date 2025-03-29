#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> nests(N, 1);
  vector<int> whereThePigeonIs(N);
  vector<int> outputs;
  for ( int i = 0; i < N; i++ ) whereThePigeonIs[i] = i + 1;
  int numberOfMultiPigeon = 0;
  for ( int i = 0; i < Q; i++ ) {
    int t;
    cin >> t;
    if ( t == 1 ) {
      int P, H;
      cin >> P >> H;
      nests[H-1]++;
      if ( nests[H-1] - 1 == 1 ) numberOfMultiPigeon++;
      nests[whereThePigeonIs[P-1]-1]--;
      if ( nests[whereThePigeonIs[P-1]-1] == 1 ) numberOfMultiPigeon--;
      whereThePigeonIs[P-1] = H;
    } else {
      outputs.emplace_back(numberOfMultiPigeon);
    }
  }
  for ( auto& o : outputs ) cout << o << endl;
  return 0;
}
