#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for ( auto& s : S ) cin >> s;
  bool canEatAllFoods = true;
  for ( int i = 0; i < N-2; ++i ) {
    if ( S[i+1] == "sweet" && S[i] == "sweet" ) {
      canEatAllFoods = false;
      break;
    }
  }
  cout << ( canEatAllFoods ? "Yes" : "No" ) << endl;
  return 0;
}
