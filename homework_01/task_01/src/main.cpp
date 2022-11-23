#include <iostream>

#include <utils.hpp>

int main() {
  cout<<"Tut izmenenie"<<endl;
  for (const auto& word : SplitString("asdas das das fgag (adasd 1fas)")) {
    std::cout << word << "\n";
  }
  return 0;
}
