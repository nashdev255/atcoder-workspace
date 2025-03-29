#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> ABC(3);
  for ( auto& abc : ABC ) cin >> abc;
  sort(ABC.begin(), ABC.end());
  bool canBeDividedByTwoGroups = false;
  if ( ABC[0] + ABC[1] == ABC[2] ) canBeDividedByTwoGroups = true;
  if ( ABC[0] == ABC[1] && ABC[1] == ABC[2] ) canBeDividedByTwoGroups = true;
  cout << ( canBeDividedByTwoGroups ? "Yes" : "No" ) << endl;
  return 0;
}
