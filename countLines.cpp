//function for counting lines in a text file
//Cecilia Aas June 2014

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int CountLines(string s)
{
  int nLines=0;
  string line;
  ifstream count_file;
  count_file.open(s.c_str());

  while (std::getline(count_file, line)) ++nLines;

  count_file.close();

  cout << nLines << endl;

  return nLines;
}

