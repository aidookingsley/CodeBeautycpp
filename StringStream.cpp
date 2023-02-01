#include <iostream>
#include <string>
#include <numeric>

int main() {
  std::string str = "Hello World";
  const char* c_str = str.c_str();
  for (int i = 0; c_str[i] != '\0'; i++) {
    std::cout << c_str[i]<<" ";
    
  }
  std::cout << std::endl;
  for (auto i : str)
  {
    std::cout << i;
  }
  std::cout << std::endl;

  for (int i = 0; i < str.length(); ++i){
    std::cout << str[i]<<"\t";
  }
  std::cout << std::endl;
  return 0;
}
