#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Player {
  private:
    int numberOfBib{};
    int numberOfPlayerStaringAt{};

  public:
    Player(
      int numberOfBib,
      int numberOfPlayerStaringAt
      ) :
      numberOfBib(numberOfBib),
      numberOfPlayerStaringAt(numberOfPlayerStaringAt) {}
    ~Player() {}

    int getNumberOfBib() {
      return numberOfBib;
    }
    int getNumberOfPlayerStaringAt() {
      return numberOfPlayerStaringAt;
    }

};

int main() {
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  vector<Player> players;
  for ( auto& p : P ) cin >> p;
  for ( auto& q : Q ) cin >> q;
  for ( int i = 0; i < N; i++ ) {
    players.emplace_back(Player(Q[i], P[i]));
  }
  vector<Player> playersB{players};
  sort(players.begin(), players.end(), [](Player& player1, Player& player2) {
    return player1.getNumberOfBib() < player2.getNumberOfBib();
  });

  // for ( auto& player : players ) {
  //   cout << '(' << player.getNumberOfPlayerStaringAt() << ',' << player.getNumberOfBib() << ')' << endl;
  // }

  // for ( auto& player : players ) {
  //   cout << player.getNumberOfPlayerStaringAt() << endl;
  // }
  
  for ( auto& player : players ) {
    const int s = playersB[player.getNumberOfPlayerStaringAt()-1].getNumberOfBib();
    cout << s << ' ';
  }
  cout << endl;
  return 0;
}
