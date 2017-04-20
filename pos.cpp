#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "pos.hpp"

using namespace std;

const string get_word(const string row)
{
    int m = row.rfind("/");
    string word = row.substr(0,m);
    return word;
}

const string get_POS(const string row)
{
  int m = row.rfind("/");
  string POS = row.substr(m+1,row.size());
  return POS;
}
