#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

#include <algorithm>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::transform;
using std::vector;

const vector<string> VALIDATION = {"Cool", "Great", "Perfect", "Beautiful", "Aw, yeah"};

int main()
{
  string input;
  int pick;

  srand(time(0));
  pick = rand() % VALIDATION.size();
  cout << "What are you listening to?\n";
  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), [](unsigned char c)
            { return std::tolower(c); });

  while (input != "nothing")
  {
    cout << VALIDATION[pick] << "! Let's listen to more\n";
    cout << "What's next?\n";
    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c)
              { return std::tolower(c); });
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  };

  return 0;
}