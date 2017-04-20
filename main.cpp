#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "pos.hpp"

using namespace std;

int main()
{
  ifstream ifs("training.pos");
  if(ifs.fail()) {
    cout << "file open failed" << endl;
    return 0;
  }

  string line;
  string ret;
  stringstream ss;
  int count = 0;

  while(getline(ifs,line)){
    ss << line;
    while(!ss.eof()){
      ss >> ret;
      cout << get_word(ret) << " / " << get_POS(ret) << endl;
    }
    ss.clear();


    //回数制限.for debug
    count++;
    if(count > 2) break;

  }

  return 0;
}
