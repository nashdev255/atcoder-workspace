#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  string vowels("aeiou");
  for ( char vowel : vowels ) S.erase(remove(S.begin(), S.end(), vowel), S.end());
  cout << S << endl;
  return 0;
}
