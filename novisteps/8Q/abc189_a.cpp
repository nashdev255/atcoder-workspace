#include <iostream>
using namespace std;

int main() {
  char C_1, C_2, C_3;
  cin >> C_1 >> C_2 >> C_3;
  cout << ( C_1 == C_2 && C_2 == C_3 ? "Won" : "Lost" ) << endl;
  return 0;
}
