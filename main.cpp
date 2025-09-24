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

  while ( input != "nothing" ){
    cout << VALIDATION[pick] << "! Let's listen to more\n";
    cout << "What's next?\n";
    getline(cin,input);
    pick = rand() % 4;
  }

  return 0;
}
