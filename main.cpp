#include <iostream>
#include <string>
#include "c-count.h"
using namespace std;

int main()
{
  string word;
  getline(cin,word);
  int x = count(word);
  cout<<"Count of output: " << x <<endl;
  return 0;
}
