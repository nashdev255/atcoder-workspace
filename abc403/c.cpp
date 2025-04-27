#include <iostream>
#include <string>
#include <vector>
#include <map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

class User {
  public:
    bool canAllSee = false;
    map<int, bool> pages{};
    bool canSee(const int Y) {
      return pages[Y];
    }
    void setCanAllSee() {
      canAllSee = true;
    }
    void setCanSee(const int Y) {
      pages[Y] = true;
    }
};

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<User> users(N);
  rep(i,Q) {
    int q;
    cin >> q;
    if ( q == 1 ) {
      int X, Y;
      cin >> X >> Y;
      users[X-1].setCanSee(Y);
    } else if ( q == 2 ) {
      int X;
      cin >> X;
      users[X-1].setCanAllSee();
    } else {
      int X, Y;
      cin >> X >> Y;
      const bool canSee = ( users[X-1].canSee(Y) ) | users[X-1].canAllSee;
      cout << ( canSee ? "Yes" : "No" ) << endl;
    }
  }
  return 0;
}
