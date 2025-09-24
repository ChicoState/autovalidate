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
  cin >> input;

    if (input == "nothing") {
      return 0;
    }

  getline(cin,input);
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do{
    cout << "What's next?\n";
    getline(cin,input);

    if (input == "nothing") {
      return 0;
    }
  
  }while( input != "nothing" );

  return 0;
}