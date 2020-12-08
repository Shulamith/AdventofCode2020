#include <iostream>
#include <fstream>
#include <unordered_set>
int main(int argc, char const *argv[]) {
  std::ifstream inputFile ("input.txt");
    if (inputFile.is_open())
    {
      std::unordered_set<int> hashNums;
      std::string stNum;
      while (getline(inputFile, stNum)) {
        hashNums.insert(stoi(stNum));
      }
      inputFile.close();
      for (const auto& elem: hashNums){
        if(hashNums.find(2020-elem) != hashNums.end()){
          std::cout << 2020-elem << "\n";
          std::cout << elem << "\n";
          std::cout << (elem * (2020-elem));
          return 0;
        }
      }
    }
    else std::cout << "Unable to open file";
  return 0;
}
