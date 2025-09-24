#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::transform;

const vector <string> VALIDATION = {"Cool","Great","Perfect","Beautiful","Aw, yeah"};

int main(){
  string input;
  int pick;

  srand(time(0));

  cout << "What are you listening to?\n";
  if (!getline(cin, input)) return 0;

  if (input == "nothing") return 0;               

  pick = rand() % VALIDATION.size();
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  while (true) {
    cout << "What's next?\n";
    if (!getline(cin, input)) break;
    if (input == "nothing") break;                
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  }

  return 0;
}
