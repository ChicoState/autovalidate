#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::transform;

const vector <string> VALIDATION = {"Cool","Great","Perfect","Beautiful","Aw, yeah"};

string get_input_in_lowercase();

int main(){
  string input;
  int pick;

  srand(time(0));
  pick = rand() % VALIDATION.size();
  cout << "What are you listening to?\n";
  input = get_input_in_lowercase();
  cout << VALIDATION[pick] << "! Let's listen to more\n";
  if(input == "nothing"){
    return 0;
  }

  do{
    cout << "What's next?\n";
    getline(cin,input);
    if(input == "nothing"){
      return 0;
    }
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  }while( input != "nothing" );

  return 0;
}
