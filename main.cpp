#include <string>
#include <fstream>
#include <iostream>

// #include ""

int main()
{
  std::ifstream ifs("training.pos");
  if(ifs.fail()) {
    std::cout << "file open failed" << std::endl;
    return 0;
  }

  std::string line;
  int count = 0;
 while(std::getline(ifs,line)){
    std::cout << line << std::endl << count << std::endl;
    count ++;
  }

  return 0;
}
