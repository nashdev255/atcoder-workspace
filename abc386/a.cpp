#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> numberOfEachCards(13, 0);
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  numberOfEachCards[A-1]++;
  numberOfEachCards[B-1]++;
  numberOfEachCards[C-1]++;
  numberOfEachCards[D-1]++;
  bool canBeFullHouse = false;
  if ( count(numberOfEachCards.begin(), numberOfEachCards.end(), 2) == 2 ) canBeFullHouse = true;
  if (
    count(numberOfEachCards.begin(), numberOfEachCards.end(), 3) == 1 &&
    count(numberOfEachCards.begin(), numberOfEachCards.end(), 1) == 1
  ) canBeFullHouse = true;
  cout << ( canBeFullHouse ? "Yes" : "No" ) << endl;
  return 0;
}
