#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int H, W, X, Y;
  string T;
  cin >> H >> W >> X >> Y;
  vector<vector<char>> grid(H, vector<char>(W));
  for ( int i = 0; i < H; i++ ) {
    for ( int j = 0; j < W; j++ ) {
      cin >> grid[i][j];
    }
  }
  cin >> T;
  int numberOfHousesSantaClausPassed = 0;
  int x = X - 1, y = Y - 1;
  for ( int i = 0; i < T.size(); i++ ) {
    if ( T[i] == 'U' && ( grid[x-1][y] == '.' || grid[x-1][y] == '@' ) ) x--;
    else if ( T[i] == 'D' && ( grid[x+1][y] == '.' || grid[x+1][y] == '@' ) ) x++;
    else if ( T[i] == 'L' && ( grid[x][y-1] == '.'  || grid[x][y-1] == '@') ) y--;
    else if ( T[i] == 'R' && ( grid[x][y+1] == '.'  || grid[x][y+1] =='@' ) ) y++;
    else continue;
    if ( grid[x][y] == '@' ) {
      numberOfHousesSantaClausPassed++;
      grid[x][y] = '.';
    }
  }
  cout << x + 1 << ' ' << y + 1 << ' ' << numberOfHousesSantaClausPassed << endl;
  return 0;
}
