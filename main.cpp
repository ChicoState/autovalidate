#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

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
  std::cout << "What are you listening to?\n";
  std::getline(std::cin, input);

  while(input != "nothing")
  {
    std::cout << VALIDATION[pick] << "! Let's listen to more\n";
    std::cout << "What's next?\n";
    std::getline(std::cin,input);
    pick = rand() % 4;
    std::cout << VALIDATION[pick] << "!\n";
  }

  return 0;
}