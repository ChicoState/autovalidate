#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

const vector <string> VALIDATION = {"Cool","Great","Perfect","Beautiful"};

int main() {
  string input;
  int pick;

  srand(time(0));

  cout << "What are you listening to?\n";
  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });

  if (input != "nothing") {
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "! Let's listen to more\n";

    do {
      cout << "What's next?\n";
      getline(cin, input);
      transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });
      if (input != "nothing") {
        pick = rand() % VALIDATION.size();
        cout << VALIDATION[pick] << "!\n";
      }
    } while (input != "nothing");
  }

  return 0;
}