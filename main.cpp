#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::transform;
using std::vector;

std::vector<std::string> VALIDATION;

string get_input_in_lowercase();

int main()
{
  string input;
  int pick;

  VALIDATION.push_back("Cool");
  VALIDATION.push_back("Great");
  VALIDATION.push_back("Perfect");
  VALIDATION.push_back("Beautiful");
  VALIDATION.push_back("Aw, yeah");

  srand(time(0));
  pick = rand() % VALIDATION.size();
  cout << "What are you listening to?\n";
  input = get_input_in_lowercase();
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do
  {
    cout << "What's next?\n";
    input = get_input_in_lowercase();
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  } while (input != "nothing");

  return 0;
}

string get_input_in_lowercase()
{
  string in;
  getline(cin, in);
  transform(in.begin(), in.end(), in.begin(), [](unsigned char c) { return std::tolower(c); });
  // I cant figure out whats going wrong 
  return in;
}