#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

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
  if (input == "nothing")
    return 0;

  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do
  {
    cout << "What's next?\n";
    getline(cin, input);
    if (input == "nothing")
      break;
    pick = rand() % 4;
    cout << VALIDATION[pick] << "!\n";
  } while (input != "nothing");

  return 0;
}