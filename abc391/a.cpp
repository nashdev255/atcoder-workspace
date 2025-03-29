#include <iostream>
#include <string>
using namespace std;

int main() {
  string direction;
  cin >> direction;
  if ( direction == "N" ) {
    cout << "S" << endl;
    return 0;
  }
  if ( direction == "S" ) {
    cout << "N" << endl;
    return 0;
  }
  if ( direction == "W" ) {
    cout << "E" << endl;
    return 0;
  }
  if ( direction == "E" ) {
    cout << "W" << endl;
    return 0;
  }
  if ( direction == "NE" ) {
    cout << "SW" << endl;
    return 0;
  }
  if ( direction == "NW" ) {
    cout << "SE" << endl;
    return 0;
  }
  if ( direction == "SE" ) {
    cout << "NW" << endl;
    return 0;
  }
  if ( direction == "SW" ) {
    cout << "NE" << endl;
    return 0;
  }
  return 0;
}
