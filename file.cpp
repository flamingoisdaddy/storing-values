// i want my profile to be geared twords beginners so this is just something im doing because i couldnt think of anything else off the bat since my process hooker 
#include <iostream> // we have to :p
#include <string> // for std::string
#include <fstream> // you'll see once we start using like std::ofstream

using namespace std; // takes away the std like std::cout << -> cout <<

int main() {
  string user; // makes the variable user which we will store info in later
  string pass; // makes the variable pass which we will store info in later
  string fileName; //makes the variable filename which we will store info in later

  cout << "user: " << endl;
  getline(cin, user); // stores the user value taken from the line that we (the user) had entered after user: 

  cout << "pass: " << endl;
  getline(cin, pass); // does the same as the other getline but uses pass

  cout << "filename: " << endl; 
  getline(cin, fileName); // stores value at the filename we've established above using string filename;

  ofstream creds(fileName, ios::app);
  creds << "user: " << user << endl; // this in the new file you've named will format it -> user: userhere
  creds << "pass: " << pass << endl; // same as above
  creds << "------------------" << endl;

  creds.close();

  return 0;
}
