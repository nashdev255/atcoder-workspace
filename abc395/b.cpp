#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> grid(N, vector<char>(N));
  for ( int i = 1; i <= (int)grid.size(); i++ ) {
    int j = N + 1 - i;
    if ( i <= j ) {
      if ( i % 2 == 1 ) {
        for ( int a = i - 1; a < j; a++ ) {
          for ( int b = i - 1; b < j; b++ ) {
            grid[a][b] = '#';
          }
        }
      } else {
        for ( int a = i - 1; a < j; a++ ) {
          for ( int b = i - 1; b < j; b++ ) {
            grid[a][b] = '.';
          }
        }
      }
    }
  }
  for ( auto& y : grid ) {
    for ( auto& x : y ) {
      cout << x;
    }
    cout << endl;
  }
  return 0;
}
