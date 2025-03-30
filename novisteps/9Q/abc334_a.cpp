#include <iostream>
using namespace std;

int main() {
  int B, G;
  cin >> B >> G;
  if ( max(B, G) == B ) cout << "Bat" << endl;
  else cout << "Glove" << endl;
  return 0;
}
