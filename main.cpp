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

int main(){
  string input;
  int pick;

  srand(time(0));
  pick = rand() % 4;
  cout << "What are you listening to?\n";
  getline(cin,input);

  if (input.empty() || input == "nothing") {
    return 0;
  }
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do{
    cout << "What's next?\n";
    getline(cin,input);

    if (input.empty() || input == "nothing") {
      break;
    }

    pick = rand() % 4;
    cout << VALIDATION[pick] << "!\n";
  }while(true);

  return 0;
}