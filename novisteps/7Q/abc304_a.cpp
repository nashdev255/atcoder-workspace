#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<pair<string, int>> people(N);
  vector<pair<string, int>> peopleArranged(N);
  ll minAge = 1e10;
  int minAgePerson;
  for ( int i = 0; i < N; ++i ) {
    string s;
    ll a;
    cin >> s >> a;
    people[i] = pair<string, int>(s, a);
    minAge = min(minAge, a);
    if ( a == minAge ) minAgePerson = i;
  }
  for ( int i = 0; i < N - minAgePerson; ++i ) peopleArranged[i] = people[minAgePerson + i];
  for ( int i = N - minAgePerson; i < N; ++i ) peopleArranged[i] = people[i - ( N - minAgePerson )];
  for ( auto& person : peopleArranged ) cout << person.first << endl;
  return 0;
}
